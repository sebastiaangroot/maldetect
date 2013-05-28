#ifndef KMALDETECT_H
#define KMALDETECT_H

typedef struct
{
	int sys_id;
	unsigned long inode;
	pid_t pid;
	unsigned long mem_loc;
} SYSCALL;

#endif
