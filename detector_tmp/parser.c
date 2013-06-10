#include <stdio.h>

#define TM_COMPLEXITY 20
#define TM_NUM_ENDSTATES 5
#define TM_NUM_STATES 15

#define NUM_SYSCALLS 330
#define NUM_STATES TM_NUM_STATES
#define MAX_COMPLEXITY TM_COMPLEXITY
#define NUM_ENDSTATES TM_NUM_ENDSTATES

int transition_matrix[NUM_STATES][NUM_SYSCALLS];
int transition_matrix_endstates[NUM_ENDSTATES];
int syscall_encoding_table[NUM_SYSCALLS][MAX_COMPLEXITY];
int branches[NUM_SYSCALLS];

/*
 * Temporary init function. The transition matrix will be loaded according to file-provided signatures
 * This temporary transition matrix simply loops every input to the next state (with the exception of state 0)
 * */
void init_transition_matrix(void)
{
	int i, j;
	for (i = 0; i < NUM_STATES; i++)
	{
		for (j = 0; j < NUM_SYSCALLS; j++)
		{
			if (i == 0 || i == NUM_STATES - 1)
			{
				transition_matrix[i][j] = i;
			}
			else
			{
				transition_matrix[i][j] = i + 1;
			}
		}
	}

	transition_matrix_endstates[0] = 5;
	transition_matrix_endstates[1] = 7;
	transition_matrix_endstates[2] = 10;
	transition_matrix_endstates[3] = 12;
	transition_matrix_endstates[4] = 14;
} 

/*
 * Fill the syscall_encoding_table according to our transition matrix and set the branches array to one for each system call
 * */
void init_parser(void)
{
	int i;

	init_transition_matrix();
	for (i = 0; i < NUM_SYSCALLS; i++)
	{
		//The syscall_encoding_table starts at state 1
		syscall_encoding_table[i][0] = transition_matrix[1][i];
		branches[i] = 1;
	}
}

/*
 * Each time a syscall points us to a new state, this function is called to update our syscall_encoding_table to account for the newly reached state
 * */
void update_syscall_encoding_table(int state)
{
	int i, j;
	int duplicate;

	//For each system call
	for (i = 0; i < NUM_SYSCALLS; i++)
	{
		//Is there even room for more system calls for this spot on our encoding table?
		//Is the branch we're examining here zero (i.e. no transition)?
		if (branches[i] >= MAX_COMPLEXITY || transition_matrix[state][i] == 0)
		{
			continue;
		}

		//Check if we've already defined the transition in our syscall_encoding_table
		duplicate = 0;
		for (j = 0; j < branches[i]; j++)
		{
			if (transition_matrix[state][i] == syscall_encoding_table[i][j])
			{
				duplicate = 1;
				break;
			}
		}
		
		//This is a new transition, so define it and increment the number of branches for this syscall
		if (!duplicate)
		{
			syscall_encoding_table[i][branches[i]] = transition_matrix[state][i];
			branches[i]++;
		}
	}
}

int handle_input(int sys_id)
{
	int i, branch_lim, state;
	
	//Step 1: Follow the syscall_encoding_table
	branch_lim = branches[sys_id];
	for (i = 0; i < branch_lim; i++)
	{
		if ((state = syscall_encoding_table[sys_id][i]) != 0)
		{
			
			fprintf(stderr, "handle_input(%i) i=%i, branches[%i]=%i, state=%i\n", sys_id, i, sys_id, branches[sys_id], state);
			update_syscall_encoding_table(state);

			//if (is_endstate(state))
			//{
			//	
			//}
		}
	}
	return 0;
}

void debug_print(void)
{
	int i, j;
	for (i = 0; i < NUM_SYSCALLS; i++)
	{
		printf("[SYS_%i] { ", i);
		for (j = 0; j < branches[i]; j++)
		{
			if (j < branches[i] - 1)
				printf("%i, ", syscall_encoding_table[i][j]);
			else
				printf("%i", syscall_encoding_table[i][j]);
		}
		printf(" }\n");
	}
}