#!/usr/bin/env python3.4

import argparse, pprint

sys_ids = { 'read': '0', 'write': '1', 'open': '2', 'close': '3', 'stat': '4', 'fstat': '5', 'lstat': '6', 'poll': '7', 'lseek': '8', 'mmap': '9', 'mprotect': '10', 'munmap': '11', 'brk': '12', 'rt_sigaction': '13', 'rt_sigprocmask': '14', 'ioctl': '16', 'pread64': '17', 'pwrite64': '18', 'readv': '19', 'writev': '20', 'access': '21', 'pipe': '22', 'select': '23', 'sched_yield': '24', 'mremap': '25', 'msync': '26', 'mincore': '27', 'madvise': '28', 'shmget': '29', 'shmat': '30', 'shmctl': '31', 'dup': '32', 'dup2': '33', 'pause': '34', 'nanosleep': '35', 'getitimer': '36', 'alarm': '37', 'setitimer': '38', 'getpid': '39', 'sendfile': '40', 'socket': '41', 'connect': '42', 'accept': '43', 'sendto': '44', 'recvfrom': '45', 'sendmsg': '46', 'recvmsg': '47', 'shutdown': '48', 'bind': '49', 'listen': '50', 'getsockname': '51', 'getpeername': '52', 'socketpair': '53', 'setsockopt': '54', 'getsockopt': '55', 'exit': '60', 'wait4': '61', 'kill': '62', 'uname': '63', 'semget': '64', 'semop': '65', 'semctl': '66', 'shmdt': '67', 'msgget': '68', 'msgsnd': '69', 'msgrcv': '70', 'msgctl': '71', 'fcntl': '72', 'flock': '73', 'fsync': '74', 'fdatasync': '75', 'truncate': '76', 'ftruncate': '77', 'getdents': '78', 'getcwd': '79', 'chdir': '80', 'fchdir': '81', 'rename': '82', 'mkdir': '83', 'rmdir': '84', 'creat': '85', 'link': '86', 'unlink': '87', 'symlink': '88', 'readlink': '89', 'chmod': '90', 'fchmod': '91', 'chown': '92', 'fchown': '93', 'lchown': '94', 'umask': '95', 'gettimeofday': '96', 'getrlimit': '97', 'getrusage': '98', 'sysinfo': '99', 'times': '100', 'ptrace': '101', 'getuid': '102', 'syslog': '103', 'getgid': '104', 'setuid': '105', 'setgid': '106', 'geteuid': '107', 'getegid': '108', 'setpgid': '109', 'getppid': '110', 'getpgrp': '111', 'setsid': '112', 'setreuid': '113', 'setregid': '114', 'getgroups': '115', 'setgroups': '116', 'setresuid': '117', 'getresuid': '118', 'setresgid': '119', 'getresgid': '120', 'getpgid': '121', 'setfsuid': '122', 'setfsgid': '123', 'getsid': '124', 'capget': '125', 'capset': '126', 'rt_sigpending': '127', 'rt_sigtimedwait': '128', 'rt_sigqueueinfo': '129', 'rt_sigsuspend': '130', 'utime': '132', 'mknod': '133', 'uselib': '134', 'personality': '135', 'ustat': '136', 'statfs': '137', 'fstatfs': '138', 'sysfs': '139', 'getpriority': '140', 'setpriority': '141', 'sched_setparam': '142', 'sched_getparam': '143', 'sched_setscheduler': '144', 'sched_getscheduler': '145', 'sched_get_priority_max': '146', 'sched_get_priority_min': '147', 'sched_rr_get_interval': '148', 'mlock': '149', 'munlock': '150', 'mlockall': '151', 'munlockall': '152', 'vhangup': '153', 'modify_ldt': '154', 'pivot_root': '155', '_sysctl': '156', 'prctl': '157', 'arch_prctl': '158', 'adjtimex': '159', 'setrlimit': '160', 'chroot': '161', 'sync': '162', 'acct': '163', 'settimeofday': '164', 'mount': '165', 'umount2': '166', 'swapon': '167', 'swapoff': '168', 'reboot': '169', 'sethostname': '170', 'setdomainname': '171', 'ioperm': '173', 'create_module': '174', 'init_module': '175', 'delete_module': '176', 'get_kernel_syms': '177', 'query_module': '178', 'quotactl': '179', 'nfsservctl': '180', 'getpmsg': '181', 'putpmsg': '182', 'afs_syscall': '183', 'tuxcall': '184', 'security': '185', 'gettid': '186', 'readahead': '187', 'setxattr': '188', 'lsetxattr': '189', 'fsetxattr': '190', 'getxattr': '191', 'lgetxattr': '192', 'fgetxattr': '193', 'listxattr': '194', 'llistxattr': '195', 'flistxattr': '196', 'removexattr': '197', 'lremovexattr': '198', 'fremovexattr': '199', 'tkill': '200', 'time': '201', 'futex': '202', 'sched_setaffinity': '203', 'sched_getaffinity': '204', 'set_thread_area': '205', 'io_setup': '206', 'io_destroy': '207', 'io_getevents': '208', 'io_submit': '209', 'io_cancel': '210', 'get_thread_area': '211', 'lookup_dcookie': '212', 'epoll_create': '213', 'epoll_ctl_old': '214', 'epoll_wait_old': '215', 'remap_file_pages': '216', 'getdents64': '217', 'set_tid_address': '218', 'restart_syscall': '219', 'semtimedop': '220', 'fadvise64': '221', 'timer_create': '222', 'timer_settime': '223', 'timer_gettime': '224', 'timer_getoverrun': '225', 'timer_delete': '226', 'clock_settime': '227', 'clock_gettime': '228', 'clock_getres': '229', 'clock_nanosleep': '230', 'exit_group': '231', 'epoll_wait': '232', 'epoll_ctl': '233', 'tgkill': '234', 'utimes': '235', 'vserver': '236', 'mbind': '237', 'set_mempolicy': '238', 'get_mempolicy': '239', 'mq_open': '240', 'mq_unlink': '241', 'mq_timedsend': '242', 'mq_timedreceive': '243', 'mq_notify': '244', 'mq_getsetattr': '245', 'kexec_load': '246', 'waitid': '247', 'add_key': '248', 'request_key': '249', 'keyctl': '250', 'ioprio_set': '251', 'ioprio_get': '252', 'inotify_init': '253', 'inotify_add_watch': '254', 'inotify_rm_watch': '255', 'migrate_pages': '256', 'openat': '257', 'mkdirat': '258', 'mknodat': '259', 'fchownat': '260', 'futimesat': '261', 'newfstatat': '262', 'unlinkat': '263', 'renameat': '264', 'linkat': '265', 'symlinkat': '266', 'readlinkat': '267', 'fchmodat': '268', 'faccessat': '269', 'pselect6': '270', 'ppoll': '271', 'unshare': '272', 'set_robust_list': '273', 'get_robust_list': '274', 'splice': '275', 'tee': '276', 'sync_file_range': '277', 'vmsplice': '278', 'move_pages': '279', 'utimensat': '280', 'epoll_pwait': '281', 'signalfd': '282', 'timerfd_create': '283', 'eventfd': '284', 'fallocate': '285', 'timerfd_settime': '286', 'timerfd_gettime': '287', 'accept4': '288', 'signalfd4': '289', 'eventfd2': '290', 'epoll_create1': '291', 'dup3': '292', 'pipe2': '293', 'inotify_init1': '294', 'preadv': '295', 'pwritev': '296', 'rt_tgsigqueueinfo': '297', 'perf_event_open': '298', 'recvmmsg': '299', 'fanotify_init': '300', 'fanotify_mark': '301', 'prlimit64': '302', 'name_to_handle_at': '303', 'open_by_handle_at': '304', 'clock_adjtime': '305', 'syncfs': '306', 'sendmmsg': '307', 'set_ns': '308', 'get_cpu': '309', 'process_vm_readv': '310', 'process_vm_writev': '311' }

class Syscall:
	def __init__(self, sys_dict):
		self.sys_dict = dict(zip(sys_dict.values(), sys_dict.keys()))

	def unpack(self, item):
		raw = []
		raw.append(item[:item.find(':')])
		item = item[item.find(':')+1:]
		raw.append(item[:item.find(':')])
		item = item[item.find(':')+1:]
		raw.append(item[:item.find(':')])
		item = item[item.find(':')+1:]
		raw.append(item)
		self.sys = self.sys_dict[raw[0]]
		self.pid = int(raw[2])
		self.inode = int(raw[1])
		self.memloc = int(raw[3])

def query_simple(trace, pid = None, inode = None, sys = None):
	syscall = Syscall(sys_ids)

	for item in trace:
		syscall.unpack(item)

		if pid and syscall.pid != pid:
			continue
		if inode and syscall.inode != inode:
			continue
		if sys and syscall.sys != sys:
			continue

		print(syscall.sys, end=', ')
	print()

def query_stats(trace, pid = None, inode = None, sys = None):
	pid_freqs = None
	inode_freqs = None
	sys_freqs = None

	if not pid:
		pid_freqs = get_pid_freqs(trace, inode=inode, sys=sys)
	if not inode:
		inode_freqs = get_inode_freqs(trace, pid=pid, sys=sys)
	if not sys:
		sys_freqs = get_sys_freqs(trace, pid=pid, inode=inode)
	
	if pid_freqs:
		print('PID occurrences:')
		for key in sorted(pid_freqs, key=pid_freqs.get, reverse=True):
			print('   %s = %i' % (key, pid_freqs[key]))
	if inode_freqs:
		print('Inode occurrences:')
		for key in sorted(inode_freqs, key=inode_freqs.get, reverse=True):
			print('   %s = %i' % (key, inode_freqs[key]))
	if sys_freqs:
		print('System call occurrences:')
		for key in sorted(sys_freqs, key=sys_freqs.get, reverse=True):
			print('   %s = %i' % (key, sys_freqs[key]))

def get_pid_freqs(trace, inode = None, sys = None):
	syscall = Syscall(sys_ids)
	freqs = {}

	for item in trace:
		syscall.unpack(item)
		if inode and syscall.inode != inode:
			continue
		if sys and syscall.sys != sys:
			continue
		if syscall.pid in freqs.keys():
			freqs[syscall.pid] += 1
		else:
			freqs[syscall.pid] = 1
	return freqs

def get_inode_freqs(trace, pid = None, sys = None):
	syscall = Syscall(sys_ids)
	freqs = {}

	for item in trace:
		syscall.unpack(item)
		if pid and syscall.pid != pid:
			continue
		if sys and syscall.sys != sys:
			continue
		if syscall.inode in freqs.keys():
			freqs[syscall.inode] += 1
		else:
			freqs[syscall.inode] = 1
	return freqs

def get_sys_freqs(trace, pid = None, inode = None):
	syscall = Syscall(sys_ids)
	freqs = {}

	for item in trace:
		syscall.unpack(item)
		if pid and syscall.pid != pid:
			continue
		if inode and syscall.inode != inode:
			continue
		if syscall.sys in freqs.keys():
			freqs[syscall.sys] += 1
		else:
			freqs[syscall.sys] = 1
	return freqs

def main():
	parser = argparse.ArgumentParser(description='Inspect a KMaldetect tracefile. Specify at least a PID or inode number.')
	parser.add_argument('--pid', dest='pid', default=None, help='the PID to search for')
	parser.add_argument('--inode', dest='inode', default=None, help='the inode to search for')
	parser.add_argument('--syscall', dest='sys', default=None, help='the system call to search for')
	parser.add_argument('--stats', dest='stats', action='store_true', help='display statistics')
	parser.add_argument('--graph', dest='graph', action='store_true', help='generate a graph. this implies --stats')
	parser.add_argument('--file', dest='file', default='', help='the trace input file')

	args = parser.parse_args()

	if args.graph:
		args.stats = True
	if args.pid:
		args.pid = int(args.pid)
	if args.inode:
		args.inode = int(args.inode)

	if not (args.pid or args.inode or args.sys) or args.file == '':
		parser.print_help()
		return
	
	with open(args.file, 'r') as f:
		trace = f.read()
	
	trace = trace.split('>')[:-1]

	if args.stats:
		query_stats(trace, pid=args.pid, inode=args.inode, sys=args.sys)
	else:
		query_simple(trace, pid=args.pid, inode=args.inode, sys=args.sys)

if __name__ == '__main__':
	main()
