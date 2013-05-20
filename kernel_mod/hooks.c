#include <linux/kernel.h>
#include <asm/unistd.h>

extern long sys_read(unsigned int fd, char __user *buf, size_t count);
extern long sys_write(unsigned int fd, const char __user *buf,   size_t count);
extern long sys_open(const char __user *filename, int flags, int mode);
extern long sys_close(unsigned int fd);
extern long sys_stat(char __user *filename, struct __old_kernel_stat __user *statbuf);
extern long sys_fstat(unsigned int fd, struct __old_kernel_stat __user *statbuf);
extern long sys_lstat(char __user *filename, struct __old_kernel_stat __user *statbuf);
extern long sys_poll(struct pollfd __user *ufds, unsigned int nfds, int timeout);
extern long sys_lseek(unsigned int fd, off_t offset,   unsigned int origin);
extern long sys_mmap(unsigned long, unsigned long, unsigned long,  unsigned long, unsigned long, unsigned long);
extern long sys_mprotect(unsigned long start, size_t len, unsigned long prot);
extern long sys_munmap(unsigned long addr, size_t len);
extern long sys_brk(unsigned long brk);
extern long sys_rt_sigaction(int sig, const struct sigaction __user *act,  struct sigaction __user *oact, size_t sigsetsize);
extern long sys_rt_sigprocmask(int how, sigset_t __user *set, sigset_t __user *oset, size_t sigsetsize);
extern long sys_rt_sigreturn(struct pt_regs *regs);
extern long sys_ioctl(unsigned int fd, unsigned int cmd, unsigned long arg);
extern long sys_pread64(unsigned int fd, char __user *buf,     size_t count, loff_t pos);
extern long sys_pwrite64(unsigned int fd, const char __user *buf,      size_t count, loff_t pos);
extern long sys_readv(unsigned long fd,   const struct iovec __user *vec,   unsigned long vlen);
extern long sys_writev(unsigned long fd,    const struct iovec __user *vec,    unsigned long vlen);
extern long sys_access(const char __user *filename, int mode);
extern long sys_pipe(int __user *fildes);
extern long sys_select(int n, fd_set __user *inp, fd_set __user *outp, fd_set __user *exp, struct timeval __user *tvp);
extern long sys_sched_yield(void);
extern long sys_mremap(unsigned long addr,    unsigned long old_len, unsigned long new_len,    unsigned long flags, unsigned long new_addr);
extern long sys_msync(unsigned long start, size_t len, int flags);
extern long sys_mincore(unsigned long start, size_t len, unsigned char __user * vec);
extern long sys_madvise(unsigned long start, size_t len, int behavior);
extern long sys_shmget(key_t key, size_t size, int flag);
extern long sys_shmat(int shmid, char __user *shmaddr, int shmflg);
extern long sys_shmctl(int shmid, int cmd, struct shmid_ds __user *buf);
extern long sys_dup(unsigned int fildes);
extern long sys_dup2(unsigned int oldfd, unsigned int newfd);
extern long sys_pause(void);
extern long sys_nanosleep(struct timespec __user *rqtp, struct timespec __user *rmtp);
extern long sys_getitimer(int which, struct itimerval __user *value);
extern long sys_alarm(unsigned int seconds);
extern long sys_setitimer(int which, struct itimerval __user *value, struct itimerval __user *ovalue);
extern long sys_getpid(void);
extern long sys_sendfile(int out_fd, int in_fd,      off_t __user *offset, size_t count);
extern long sys_socket(int, int, int);
extern long sys_connect(int, struct sockaddr __user *, int);
extern long sys_accept(int, struct sockaddr __user *, int __user *);
extern long sys_sendto(int, void __user *, size_t, unsigned, struct sockaddr __user *, int);
extern long sys_recvfrom(int, void __user *, size_t, unsigned, struct sockaddr __user *, int __user *);
extern long sys_sendmsg(int fd, struct msghdr __user *msg, unsigned flags);
extern long sys_recvmsg(int fd, struct msghdr __user *msg, unsigned flags);
extern long sys_shutdown(int, int);
extern long sys_bind(int, struct sockaddr __user *, int);
extern long sys_listen(int, int);
extern long sys_getsockname(int, struct sockaddr __user *, int __user *);
extern long sys_getpeername(int, struct sockaddr __user *, int __user *);
extern long sys_socketpair(int, int, int, int __user *);
extern long sys_setsockopt(int fd, int level, int optname, char __user *optval, int optlen);
extern long sys_getsockopt(int fd, int level, int optname, char __user *optval, int __user *optlen);
extern long sys_clone(unsigned long, unsigned long,   void __user *, void __user *,   struct pt_regs *);
extern long sys_fork(struct pt_regs *regs);
extern long sys_vfork(struct pt_regs *regs);
extern long sys_execve(char __user *, char __user * __user *,    char __user * __user *,    struct pt_regs *);
extern long sys_exit(int error_code);
extern long sys_wait4(pid_t pid, int __user *stat_addr, int options, struct rusage __user *ru);
extern long sys_kill(int pid, int sig);
extern long sys_uname(struct new_utsname __user *);
extern long sys_semget(key_t key, int nsems, int semflg);
extern long sys_semop(int semid, struct sembuf __user *sops, unsigned nsops);
extern long sys_semctl(int semid, int semnum, int cmd, union semun arg);
extern long sys_shmdt(char __user *shmaddr);
extern long sys_msgget(key_t key, int msgflg);
extern long sys_msgsnd(int msqid, struct msgbuf __user *msgp, size_t msgsz, int msgflg);
extern long sys_msgrcv(int msqid, struct msgbuf __user *msgp, size_t msgsz, long msgtyp, int msgflg);
extern long sys_msgctl(int msqid, int cmd, struct msqid_ds __user *buf);
extern long sys_fcntl(unsigned int fd, unsigned int cmd, unsigned long arg);
extern long sys_flock(unsigned int fd, unsigned int cmd);
extern long sys_fsync(unsigned int fd);
extern long sys_fdatasync(unsigned int fd);
extern long sys_truncate(const char __user *path, long length);
extern long sys_ftruncate(unsigned int fd, unsigned long length);
extern long sys_getdents(unsigned int fd, struct linux_dirent __user *dirent, unsigned int count);
extern long sys_getcwd(char __user *buf, unsigned long size);
extern long sys_chdir(const char __user *filename);
extern long sys_fchdir(unsigned int fd);
extern long sys_rename(const char __user *oldname, const char __user *newname);
extern long sys_mkdir(const char __user *pathname, int mode);
extern long sys_rmdir(const char __user *pathname);
extern long sys_creat(const char __user *pathname, int mode);
extern long sys_link(const char __user *oldname, const char __user *newname);
extern long sys_unlink(const char __user *pathname);
extern long sys_symlink(const char __user *old, const char __user *new);
extern long sys_readlink(const char __user *path, char __user *buf, int bufsiz);
extern long sys_chmod(const char __user *filename, mode_t mode);
extern long sys_fchmod(unsigned int fd, mode_t mode);
extern long sys_chown(const char __user *filename, uid_t user, gid_t group);
extern long sys_fchown(unsigned int fd, uid_t user, gid_t group);
extern long sys_lchown(const char __user *filename, uid_t user, gid_t group);
extern long sys_umask(int mask);
extern long sys_gettimeofday(struct timeval __user *tv, struct timezone __user *tz);
extern long sys_getrlimit(unsigned int resource, struct rlimit __user *rlim);
extern long sys_getrusage(int who, struct rusage __user *ru);
extern long sys_sysinfo(struct sysinfo __user *info);
extern long sys_times(struct tms __user *tbuf);
extern long sys_ptrace(long request, long pid, long addr, long data);
extern long sys_getuid(void);
extern long sys_syslog(int type, char __user *buf, int len);
extern long sys_getgid(void);
extern long sys_setuid(uid_t uid);
extern long sys_setgid(gid_t gid);
extern long sys_geteuid(void);
extern long sys_getegid(void);
extern long sys_setpgid(pid_t pid, pid_t pgid);
extern long sys_getppid(void);
extern long sys_getpgrp(void);
extern long sys_setsid(void);
extern long sys_setreuid(uid_t ruid, uid_t euid);
extern long sys_setregid(gid_t rgid, gid_t egid);
extern long sys_getgroups(int gidsetsize, gid_t __user *grouplist);
extern long sys_setgroups(int gidsetsize, gid_t __user *grouplist);
extern long sys_setresuid(uid_t ruid, uid_t euid, uid_t suid);
extern long sys_getresuid(uid_t __user *ruid, uid_t __user *euid, uid_t __user *suid);
extern long sys_setresgid(gid_t rgid, gid_t egid, gid_t sgid);
extern long sys_getresgid(gid_t __user *rgid, gid_t __user *egid, gid_t __user *sgid);
extern long sys_getpgid(pid_t pid);
extern long sys_setfsuid(uid_t uid);
extern long sys_setfsgid(gid_t gid);
extern long sys_getsid(pid_t pid);
extern long sys_capget(cap_user_header_t header, cap_user_data_t dataptr);
extern long sys_capset(cap_user_header_t header, const cap_user_data_t data);
extern long sys_rt_sigpending(sigset_t __user *set, size_t sigsetsize);
extern long sys_rt_sigtimedwait(const sigset_t __user *uthese, siginfo_t __user *uinfo, const struct timespec __user *uts, size_t sigsetsize);
extern long sys_rt_sigqueueinfo(int pid, int sig, siginfo_t __user *uinfo);
extern long sys_rt_sigsuspend(sigset_t __user *unewset, size_t sigsetsize);
extern long sys_sigaltstack(const stack_t __user *, stack_t __user *, struct pt_regs *);
extern long sys_utime(char __user *filename, struct utimbuf __user *times);
extern long sys_mknod(const char __user *filename, int mode, unsigned dev);
extern long sys_uselib(const char __user *library);
extern long sys_personality(unsigned int personality);
extern long sys_ustat(unsigned dev, struct ustat __user *ubuf);
extern long sys_statfs(const char __user * path, struct statfs __user *buf);
extern long sys_fstatfs(unsigned int fd, struct statfs __user *buf);
extern long sys_sysfs(int option, unsigned long arg1, unsigned long arg2);
extern long sys_getpriority(int which, int who);
extern long sys_setpriority(int which, int who, int niceval);
extern long sys_sched_setparam(pid_t pid, struct sched_param __user *param);
extern long sys_sched_getparam(pid_t pid, struct sched_param __user *param);
extern long sys_sched_setscheduler(pid_t pid, int policy, struct sched_param __user *param);
extern long sys_sched_getscheduler(pid_t pid);
extern long sys_sched_get_priority_max(int policy);
extern long sys_sched_get_priority_min(int policy);
extern long sys_sched_rr_get_interval(pid_t pid, struct timespec __user *interval);
extern long sys_mlock(unsigned long start, size_t len);
extern long sys_munlock(unsigned long start, size_t len);
extern long sys_mlockall(int flags);
extern long sys_munlockall(void);
extern long sys_vhangup(void);
extern long sys_pivot_root(const char __user *new_root, const char __user *put_old);
extern long sys_prctl(int option, unsigned long arg2, unsigned long arg3, unsigned long arg4, unsigned long arg5);
extern long sys_adjtimex(struct timex __user *txc_p);
extern long sys_setrlimit(unsigned int resource, struct rlimit __user *rlim);
extern long sys_chroot(const char __user *filename);
extern long sys_sync(void);
extern long sys_acct(const char __user *name);
extern long sys_settimeofday(struct timeval __user *tv, struct timezone __user *tz);
extern long sys_mount(char __user *dev_name, char __user *dir_name, char __user *type, unsigned long flags, void __user *data);
extern long sys_swapon(const char __user *specialfile, int swap_flags);
extern long sys_swapoff(const char __user *specialfile);
extern long sys_reboot(int magic1, int magic2, unsigned int cmd, void __user *arg);
extern long sys_sethostname(char __user *name, int len);
extern long sys_setdomainname(char __user *name, int len);
extern long sys_iopl(unsigned int, struct pt_regs *);
extern long sys_ioperm(unsigned long, unsigned long, int);
extern long sys_init_module(void __user *umod, unsigned long len, const char __user *uargs);
extern long sys_delete_module(const char __user *name_user, unsigned int flags);
extern long sys_quotactl(unsigned int cmd, const char __user *special, qid_t id, void __user *addr);
extern long sys_nfsservctl(int cmd, struct nfsctl_arg __user *arg, void __user *res);
extern long sys_gettid(void);
extern long sys_readahead(int fd, loff_t offset, size_t count);
extern long sys_setxattr(const char __user *path, const char __user *name,      const void __user *value, size_t size, int flags);
extern long sys_lsetxattr(const char __user *path, const char __user *name,       const void __user *value, size_t size, int flags);
extern long sys_fsetxattr(int fd, const char __user *name,       const void __user *value, size_t size, int flags);
extern long sys_getxattr(const char __user *path, const char __user *name,      void __user *value, size_t size);
extern long sys_lgetxattr(const char __user *path, const char __user *name,       void __user *value, size_t size);
extern long sys_fgetxattr(int fd, const char __user *name,       void __user *value, size_t size);
extern long sys_listxattr(const char __user *path, char __user *list,       size_t size);
extern long sys_llistxattr(const char __user *path, char __user *list,        size_t size);
extern long sys_flistxattr(int fd, char __user *list, size_t size);
extern long sys_removexattr(const char __user *path, const char __user *name);
extern long sys_lremovexattr(const char __user *path,  const char __user *name);
extern long sys_fremovexattr(int fd, const char __user *name);
extern long sys_tkill(int pid, int sig);
extern long sys_time(time_t __user *tloc);
extern long sys_futex(u32 __user *uaddr, int op, u32 val, struct timespec __user *utime, u32 __user *uaddr2, u32 val3);
extern long sys_sched_setaffinity(pid_t pid, unsigned int len, unsigned long __user *user_mask_ptr);
extern long sys_sched_getaffinity(pid_t pid, unsigned int len, unsigned long __user *user_mask_ptr);
extern long sys_io_setup(unsigned nr_reqs, aio_context_t __user *ctx);
extern long sys_io_destroy(aio_context_t ctx);
extern long sys_io_getevents(aio_context_t ctx_id, long min_nr, long nr, struct io_event __user *events, struct timespec __user *timeout);
extern long sys_io_submit(aio_context_t, long, struct iocb __user * __user *);
extern long sys_io_cancel(aio_context_t ctx_id, struct iocb __user *iocb,       struct io_event __user *result);
extern long sys_lookup_dcookie(u64 cookie64, char __user *buf, size_t len);
extern long sys_epoll_create(int size);
extern long sys_remap_file_pages(unsigned long start, unsigned long size, unsigned long prot, unsigned long pgoff, unsigned long flags);
extern long sys_getdents64(unsigned int fd, struct linux_dirent64 __user *dirent, unsigned int count);
extern long sys_set_tid_address(int __user *tidptr);
extern long sys_restart_syscall(void);
extern long sys_semtimedop(int semid, struct sembuf __user *sops, unsigned nsops, const struct timespec __user *timeout);
extern long sys_fadvise64(int fd, loff_t offset, size_t len, int advice);
extern long sys_timer_create(clockid_t which_clock,  struct sigevent __user *timer_event_spec,  timer_t __user * created_timer_id);
extern long sys_timer_settime(timer_t timer_id, int flags, const struct itimerspec __user *new_setting, struct itimerspec __user *old_setting);
extern long sys_timer_gettime(timer_t timer_id, struct itimerspec __user *setting);
extern long sys_timer_getoverrun(timer_t timer_id);
extern long sys_timer_delete(timer_t timer_id);
extern long sys_clock_settime(clockid_t which_clock, const struct timespec __user *tp);
extern long sys_clock_gettime(clockid_t which_clock, struct timespec __user *tp);
extern long sys_clock_getres(clockid_t which_clock, struct timespec __user *tp);
extern long sys_clock_nanosleep(clockid_t which_clock, int flags, const struct timespec __user *rqtp, struct timespec __user *rmtp);
extern long sys_exit_group(int error_code);
extern long sys_epoll_wait(int epfd, struct epoll_event __user *events, int maxevents, int timeout);
extern long sys_epoll_ctl(int epfd, int op, int fd, struct epoll_event __user *event);
extern long sys_tgkill(int tgid, int pid, int sig);
extern long sys_utimes(char __user *filename, struct timeval __user *utimes);
extern long sys_mbind(unsigned long start, unsigned long len, unsigned long mode, unsigned long __user *nmask, unsigned long maxnode, unsigned flags);
extern long sys_set_mempolicy(int mode, unsigned long __user *nmask, unsigned long maxnode);
extern long sys_get_mempolicy(int __user *policy, unsigned long __user *nmask, unsigned long maxnode, unsigned long addr, unsigned long flags);
extern long sys_mq_open(const char __user *name, int oflag, mode_t mode, struct mq_attr __user *attr);
extern long sys_mq_unlink(const char __user *name);
extern long sys_mq_timedsend(mqd_t mqdes, const char __user *msg_ptr, size_t msg_len, unsigned int msg_prio, const struct timespec __user *abs_timeout);
extern long sys_mq_timedreceive(mqd_t mqdes, char __user *msg_ptr, size_t msg_len, unsigned int __user *msg_prio, const struct timespec __user *abs_timeout);
extern long sys_mq_notify(mqd_t mqdes, const struct sigevent __user *notification);
extern long sys_mq_getsetattr(mqd_t mqdes, const struct mq_attr __user *mqstat, struct mq_attr __user *omqstat);
extern long sys_kexec_load(unsigned long entry, unsigned long nr_segments, struct kexec_segment __user *segments, unsigned long flags);
extern long sys_waitid(int which, pid_t pid,    struct siginfo __user *infop,    int options, struct rusage __user *ru);
extern long sys_add_key(const char __user *_type,     const char __user *_description,     const void __user *_payload,     size_t plen,     key_serial_t destringid);
extern long sys_request_key(const char __user *_type, const char __user *_description, const char __user *_callout_info, key_serial_t destringid);
extern long sys_keyctl(int cmd, unsigned long arg2, unsigned long arg3,    unsigned long arg4, unsigned long arg5);
extern long sys_ioprio_set(int which, int who, int ioprio);
extern long sys_ioprio_get(int which, int who);
extern long sys_inotify_init(void);
extern long sys_inotify_add_watch(int fd, const char __user *path, u32 mask);
extern long sys_inotify_rm_watch(int fd, __s32 wd);
extern long sys_migrate_pages(pid_t pid, unsigned long maxnode, const unsigned long __user *from, const unsigned long __user *to);
extern long sys_openat(int dfd, const char __user *filename, int flags,    int mode);
extern long sys_mkdirat(int dfd, const char __user * pathname, int mode);
extern long sys_mknodat(int dfd, const char __user * filename, int mode,     unsigned dev);
extern long sys_fchownat(int dfd, const char __user *filename, uid_t user,      gid_t group, int flag);
extern long sys_futimesat(int dfd, char __user *filename,       struct timeval __user *utimes);
extern long sys_newfstatat(int dfd, char __user *filename,        struct stat __user *statbuf, int flag);
extern long sys_unlinkat(int dfd, const char __user * pathname, int flag);
extern long sys_renameat(int olddfd, const char __user * oldname,      int newdfd, const char __user * newname);
extern long sys_linkat(int olddfd, const char __user *oldname,    int newdfd, const char __user *newname, int flags);
extern long sys_symlinkat(const char __user * oldname,       int newdfd, const char __user * newname);
extern long sys_readlinkat(int dfd, const char __user *path, char __user *buf,        int bufsiz);
extern long sys_fchmodat(int dfd, const char __user * filename,      mode_t mode);
extern long sys_faccessat(int dfd, const char __user *filename, int mode);
extern long sys_pselect6(int, fd_set __user *, fd_set __user *,      fd_set __user *, struct timespec __user *,      void __user *);
extern long sys_ppoll(struct pollfd __user *, unsigned int,   struct timespec __user *, const sigset_t __user *,   size_t);
extern long sys_unshare(unsigned long unshare_flags);
extern long sys_set_robust_list(struct robust_list_head __user *head,     size_t len);
extern long sys_get_robust_list(int pid,     struct robust_list_head __user * __user *head_ptr,     size_t __user *len_ptr);
extern long sys_splice(int fd_in, loff_t __user *off_in,    int fd_out, loff_t __user *off_out,    size_t len, unsigned int flags);
extern long sys_tee(int fdin, int fdout, size_t len, unsigned int flags);
extern long sys_sync_file_range(int fd, loff_t offset, loff_t nbytes, unsigned int flags);
extern long sys_vmsplice(int fd, const struct iovec __user *iov,      unsigned long nr_segs, unsigned int flags);
extern long sys_move_pages(pid_t pid, unsigned long nr_pages, const void __user * __user *pages, const int __user *nodes, int __user *status, int flags);
extern long sys_utimensat(int dfd, char __user *filename, struct timespec __user *utimes, int flags);
extern long sys_epoll_pwait(int epfd, struct epoll_event __user *events, int maxevents, int timeout, const sigset_t __user *sigmask, size_t sigsetsize);
extern long sys_signalfd(int ufd, sigset_t __user *user_mask, size_t sizemask);
extern long sys_timerfd_create(int clockid, int flags);
extern long sys_eventfd(unsigned int count);
extern long sys_fallocate(int fd, int mode, loff_t offset, loff_t len);
extern long sys_timerfd_settime(int ufd, int flags,     const struct itimerspec __user *utmr,     struct itimerspec __user *otmr);
extern long sys_timerfd_gettime(int ufd, struct itimerspec __user *otmr);
extern long sys_accept4(int, struct sockaddr __user *, int __user *, int);
extern long sys_signalfd4(int ufd, sigset_t __user *user_mask, size_t sizemask, int flags);
extern long sys_eventfd2(unsigned int count, int flags);
extern long sys_epoll_create1(int flags);
extern long sys_dup3(unsigned int oldfd, unsigned int newfd, int flags);
extern long sys_pipe2(int __user *fildes, int flags);
extern long sys_inotify_init1(int flags);
extern long sys_preadv(unsigned long fd, const struct iovec __user *vec,    unsigned long vlen, unsigned long pos_l, unsigned long pos_h);
extern long sys_pwritev(unsigned long fd, const struct iovec __user *vec,     unsigned long vlen, unsigned long pos_l, unsigned long pos_h);
extern long sys_rt_tgsigqueueinfo(pid_t tgid, pid_t  pid, int sig, siginfo_t __user *uinfo);
extern long sys_perf_event_open( struct perf_event_attr __user *attr_uptr, pid_t pid, int cpu, int group_fd, unsigned long flags);
extern long sys_recvmmsg(int fd, struct mmsghdr __user *msg,      unsigned int vlen, unsigned flags,      struct timespec __user *timeout);
extern long sys_clock_adjtime(clockid_t which_clock, struct timex __user *tx);
extern long sys_syncfs(int fd);
extern long sys_sendmmsg(int fd, struct mmsghdr __user *msg,      unsigned int vlen, unsigned flags);
extern long sys_process_vm_readv(pid_t pid,      const struct iovec __user *lvec,      unsigned long liovcnt,      const struct iovec __user *rvec,      unsigned long riovcnt,      unsigned long flags);
extern long sys_process_vm_writev(pid_t pid,       const struct iovec __user *lvec,       unsigned long liovcnt,       const struct iovec __user *rvec,       unsigned long riovcnt,       unsigned long flags);

extern long hook_read(unsigned int fd, char __user *buf, size_t count)
{
	long retval = n long sys_read(fd,buf,count);
	return retval;
}

extern long hook_write(unsigned int fd, const char __user *buf,   size_t count)
{
	long retval = n long sys_write(fd,buf,count);
	return retval;
}

extern long hook_open(const char __user *filename, int flags, int mode)
{
	long retval = n long sys_open(filename,flags,mode);
	return retval;
}

extern long hook_close(unsigned int fd)
{
	long retval = n long sys_close(fd);
	return retval;
}

extern long hook_stat(char __user *filename, struct __old_kernel_stat __user *statbuf)
{
	long retval = n long sys_stat(filename,statbuf);
	return retval;
}

extern long hook_fstat(unsigned int fd, struct __old_kernel_stat __user *statbuf)
{
	long retval = n long sys_fstat(fd,statbuf);
	return retval;
}

extern long hook_lstat(char __user *filename, struct __old_kernel_stat __user *statbuf)
{
	long retval = n long sys_lstat(filename,statbuf);
	return retval;
}

extern long hook_poll(struct pollfd __user *ufds, unsigned int nfds, int timeout)
{
	long retval = n long sys_poll(ufds,nfds,timeout);
	return retval;
}

extern long hook_lseek(unsigned int fd, off_t offset,   unsigned int origin)
{
	long retval = n long sys_lseek(fd,offset,origin);
	return retval;
}

extern long hook_mmap(unsigned long arg0, unsigned long arg1, unsigned long arg2,  unsigned long arg3, unsigned long arg4, unsigned long arg5)
{
	long retval = n long sys_mmap(arg0,arg1,arg2,arg3,arg4,arg5);
	return retval;
}

extern long hook_mprotect(unsigned long start, size_t len, unsigned long prot)
{
	long retval = n long sys_mprotect(start,len,prot);
	return retval;
}

extern long hook_munmap(unsigned long addr, size_t len)
{
	long retval = n long sys_munmap(addr,len);
	return retval;
}

extern long hook_brk(unsigned long brk)
{
	long retval = n long sys_brk(brk);
	return retval;
}

extern long hook_rt_sigaction(int sig, const struct sigaction __user *act,  struct sigaction __user *oact, size_t sigsetsize)
{
	long retval = n long sys_rt_sigaction(sig,act,oact,sigsetsize);
	return retval;
}

extern long hook_rt_sigprocmask(int how, sigset_t __user *set, sigset_t __user *oset, size_t sigsetsize)
{
	long retval = n long sys_rt_sigprocmask(how,set,oset,sigsetsize);
	return retval;
}

extern long hook_rt_sigreturn(struct pt_regs *regs)
{
	long retval = n long sys_rt_sigreturn(regs);
	return retval;
}

extern long hook_ioctl(unsigned int fd, unsigned int cmd, unsigned long arg)
{
	long retval = n long sys_ioctl(fd,cmd,arg);
	return retval;
}

extern long hook_pread64(unsigned int fd, char __user *buf,     size_t count, loff_t pos)
{
	long retval = n long sys_pread64(fd,buf,count,pos);
	return retval;
}

extern long hook_pwrite64(unsigned int fd, const char __user *buf,      size_t count, loff_t pos)
{
	long retval = n long sys_pwrite64(fd,buf,count,pos);
	return retval;
}

extern long hook_readv(unsigned long fd,   const struct iovec __user *vec,   unsigned long vlen)
{
	long retval = n long sys_readv(fd,vec,vlen);
	return retval;
}

extern long hook_writev(unsigned long fd,    const struct iovec __user *vec,    unsigned long vlen)
{
	long retval = n long sys_writev(fd,vec,vlen);
	return retval;
}

extern long hook_access(const char __user *filename, int mode)
{
	long retval = n long sys_access(filename,mode);
	return retval;
}

extern long hook_pipe(int __user *fildes)
{
	long retval = n long sys_pipe(fildes);
	return retval;
}

extern long hook_select(int n, fd_set __user *inp, fd_set __user *outp, fd_set __user *exp, struct timeval __user *tvp)
{
	long retval = n long sys_select(n,inp,outp,exp,tvp);
	return retval;
}

extern long hook_sched_yield(void)
{
	long retval = n long sys_sched_yield();
	return retval;
}

extern long hook_mremap(unsigned long addr,    unsigned long old_len, unsigned long new_len,    unsigned long flags, unsigned long new_addr)
{
	long retval = n long sys_mremap(addr,old_len,new_len,flags,new_addr);
	return retval;
}

extern long hook_msync(unsigned long start, size_t len, int flags)
{
	long retval = n long sys_msync(start,len,flags);
	return retval;
}

extern long hook_mincore(unsigned long start, size_t len, unsigned char __user * vec)
{
	long retval = n long sys_mincore(start,len,vec);
	return retval;
}

extern long hook_madvise(unsigned long start, size_t len, int behavior)
{
	long retval = n long sys_madvise(start,len,behavior);
	return retval;
}

extern long hook_shmget(key_t key, size_t size, int flag)
{
	long retval = n long sys_shmget(key,size,flag);
	return retval;
}

extern long hook_shmat(int shmid, char __user *shmaddr, int shmflg)
{
	long retval = n long sys_shmat(shmid,shmaddr,shmflg);
	return retval;
}

extern long hook_shmctl(int shmid, int cmd, struct shmid_ds __user *buf)
{
	long retval = n long sys_shmctl(shmid,cmd,buf);
	return retval;
}

extern long hook_dup(unsigned int fildes)
{
	long retval = n long sys_dup(fildes);
	return retval;
}

extern long hook_dup2(unsigned int oldfd, unsigned int newfd)
{
	long retval = n long sys_dup2(oldfd,newfd);
	return retval;
}

extern long hook_pause(void)
{
	long retval = n long sys_pause();
	return retval;
}

extern long hook_nanosleep(struct timespec __user *rqtp, struct timespec __user *rmtp)
{
	long retval = n long sys_nanosleep(rqtp,rmtp);
	return retval;
}

extern long hook_getitimer(int which, struct itimerval __user *value)
{
	long retval = n long sys_getitimer(which,value);
	return retval;
}

extern long hook_alarm(unsigned int seconds)
{
	long retval = n long sys_alarm(seconds);
	return retval;
}

extern long hook_setitimer(int which, struct itimerval __user *value, struct itimerval __user *ovalue)
{
	long retval = n long sys_setitimer(which,value,ovalue);
	return retval;
}

extern long hook_getpid(void)
{
	long retval = n long sys_getpid();
	return retval;
}

extern long hook_sendfile(int out_fd, int in_fd,      off_t __user *offset, size_t count)
{
	long retval = n long sys_sendfile(out_fd,in_fd,offset,count);
	return retval;
}

extern long hook_socket(int arg0, int arg1, int arg2)
{
	long retval = n long sys_socket(arg0,arg1,arg2);
	return retval;
}

extern long hook_connect(int arg0, struct sockaddr __user *arg1, int arg2)
{
	long retval = n long sys_connect(arg0,arg1,arg2);
	return retval;
}

extern long hook_accept(int arg0, struct sockaddr __user *arg1, int __user *arg2)
{
	long retval = n long sys_accept(arg0,arg1,arg2);
	return retval;
}

extern long hook_sendto(int arg0, void __user *arg1, size_t arg2, unsigned arg3, struct sockaddr __user *arg4, int arg5)
{
	long retval = n long sys_sendto(arg0,arg1,arg2,arg3,arg4,arg5);
	return retval;
}

extern long hook_recvfrom(int arg0, void __user *arg1, size_t arg2, unsigned arg3, struct sockaddr __user *arg4, int __user *arg5)
{
	long retval = n long sys_recvfrom(arg0,arg1,arg2,arg3,arg4,arg5);
	return retval;
}

extern long hook_sendmsg(int fd, struct msghdr __user *msg, unsigned flags)
{
	long retval = n long sys_sendmsg(fd,msg,flags);
	return retval;
}

extern long hook_recvmsg(int fd, struct msghdr __user *msg, unsigned flags)
{
	long retval = n long sys_recvmsg(fd,msg,flags);
	return retval;
}

extern long hook_shutdown(int arg0, int arg1)
{
	long retval = n long sys_shutdown(arg0,arg1);
	return retval;
}

extern long hook_bind(int arg0, struct sockaddr __user *arg1, int arg2)
{
	long retval = n long sys_bind(arg0,arg1,arg2);
	return retval;
}

extern long hook_listen(int arg0, int arg1)
{
	long retval = n long sys_listen(arg0,arg1);
	return retval;
}

extern long hook_getsockname(int arg0, struct sockaddr __user *arg1, int __user *arg2)
{
	long retval = n long sys_getsockname(arg0,arg1,arg2);
	return retval;
}

extern long hook_getpeername(int arg0, struct sockaddr __user *arg1, int __user *arg2)
{
	long retval = n long sys_getpeername(arg0,arg1,arg2);
	return retval;
}

extern long hook_socketpair(int arg0, int arg1, int arg2, int __user *arg3)
{
	long retval = n long sys_socketpair(arg0,arg1,arg2,arg3);
	return retval;
}

extern long hook_setsockopt(int fd, int level, int optname, char __user *optval, int optlen)
{
	long retval = n long sys_setsockopt(fd,level,optname,optval,optlen);
	return retval;
}

extern long hook_getsockopt(int fd, int level, int optname, char __user *optval, int __user *optlen)
{
	long retval = n long sys_getsockopt(fd,level,optname,optval,optlen);
	return retval;
}

extern long hook_clone(unsigned long arg0, unsigned long arg1,   void __user *arg2, void __user *arg3,   struct pt_regs *arg4)
{
	long retval = n long sys_clone(arg0,arg1,arg2,arg3,arg4);
	return retval;
}

extern long hook_fork(struct pt_regs *regs)
{
	long retval = n long sys_fork(regs);
	return retval;
}

extern long hook_vfork(struct pt_regs *regs)
{
	long retval = n long sys_vfork(regs);
	return retval;
}

extern long hook_execve(char __user *arg0, char __user * __user *arg1,    char __user * __user *arg2,    struct pt_regs *arg3)
{
	long retval = n long sys_execve(arg0,arg1,arg2,arg3);
	return retval;
}

extern long hook_exit(int error_code)
{
	long retval = n long sys_exit(error_code);
	return retval;
}

extern long hook_wait4(pid_t pid, int __user *stat_addr, int options, struct rusage __user *ru)
{
	long retval = n long sys_wait4(pid,stat_addr,options,ru);
	return retval;
}

extern long hook_kill(int pid, int sig)
{
	long retval = n long sys_kill(pid,sig);
	return retval;
}

extern long hook_uname(struct new_utsname __user *arg0)
{
	long retval = n long sys_uname(arg0);
	return retval;
}

extern long hook_semget(key_t key, int nsems, int semflg)
{
	long retval = n long sys_semget(key,nsems,semflg);
	return retval;
}

extern long hook_semop(int semid, struct sembuf __user *sops, unsigned nsops)
{
	long retval = n long sys_semop(semid,sops,nsops);
	return retval;
}

extern long hook_semctl(int semid, int semnum, int cmd, union semun arg)
{
	long retval = n long sys_semctl(semid,semnum,cmd,arg);
	return retval;
}

extern long hook_shmdt(char __user *shmaddr)
{
	long retval = n long sys_shmdt(shmaddr);
	return retval;
}

extern long hook_msgget(key_t key, int msgflg)
{
	long retval = n long sys_msgget(key,msgflg);
	return retval;
}

extern long hook_msgsnd(int msqid, struct msgbuf __user *msgp, size_t msgsz, int msgflg)
{
	long retval = n long sys_msgsnd(msqid,msgp,msgsz,msgflg);
	return retval;
}

extern long hook_msgrcv(int msqid, struct msgbuf __user *msgp, size_t msgsz, long msgtyp, int msgflg)
{
	long retval = n long sys_msgrcv(msqid,msgp,msgsz,msgtyp,msgflg);
	return retval;
}

extern long hook_msgctl(int msqid, int cmd, struct msqid_ds __user *buf)
{
	long retval = n long sys_msgctl(msqid,cmd,buf);
	return retval;
}

extern long hook_fcntl(unsigned int fd, unsigned int cmd, unsigned long arg)
{
	long retval = n long sys_fcntl(fd,cmd,arg);
	return retval;
}

extern long hook_flock(unsigned int fd, unsigned int cmd)
{
	long retval = n long sys_flock(fd,cmd);
	return retval;
}

extern long hook_fsync(unsigned int fd)
{
	long retval = n long sys_fsync(fd);
	return retval;
}

extern long hook_fdatasync(unsigned int fd)
{
	long retval = n long sys_fdatasync(fd);
	return retval;
}

extern long hook_truncate(const char __user *path, long length)
{
	long retval = n long sys_truncate(path,length);
	return retval;
}

extern long hook_ftruncate(unsigned int fd, unsigned long length)
{
	long retval = n long sys_ftruncate(fd,length);
	return retval;
}

extern long hook_getdents(unsigned int fd, struct linux_dirent __user *dirent, unsigned int count)
{
	long retval = n long sys_getdents(fd,dirent,count);
	return retval;
}

extern long hook_getcwd(char __user *buf, unsigned long size)
{
	long retval = n long sys_getcwd(buf,size);
	return retval;
}

extern long hook_chdir(const char __user *filename)
{
	long retval = n long sys_chdir(filename);
	return retval;
}

extern long hook_fchdir(unsigned int fd)
{
	long retval = n long sys_fchdir(fd);
	return retval;
}

extern long hook_rename(const char __user *oldname, const char __user *newname)
{
	long retval = n long sys_rename(oldname,newname);
	return retval;
}

extern long hook_mkdir(const char __user *pathname, int mode)
{
	long retval = n long sys_mkdir(pathname,mode);
	return retval;
}

extern long hook_rmdir(const char __user *pathname)
{
	long retval = n long sys_rmdir(pathname);
	return retval;
}

extern long hook_creat(const char __user *pathname, int mode)
{
	long retval = n long sys_creat(pathname,mode);
	return retval;
}

extern long hook_link(const char __user *oldname, const char __user *newname)
{
	long retval = n long sys_link(oldname,newname);
	return retval;
}

extern long hook_unlink(const char __user *pathname)
{
	long retval = n long sys_unlink(pathname);
	return retval;
}

extern long hook_symlink(const char __user *old, const char __user *new)
{
	long retval = n long sys_symlink(old,new);
	return retval;
}

extern long hook_readlink(const char __user *path, char __user *buf, int bufsiz)
{
	long retval = n long sys_readlink(path,buf,bufsiz);
	return retval;
}

extern long hook_chmod(const char __user *filename, mode_t mode)
{
	long retval = n long sys_chmod(filename,mode);
	return retval;
}

extern long hook_fchmod(unsigned int fd, mode_t mode)
{
	long retval = n long sys_fchmod(fd,mode);
	return retval;
}

extern long hook_chown(const char __user *filename, uid_t user, gid_t group)
{
	long retval = n long sys_chown(filename,user,group);
	return retval;
}

extern long hook_fchown(unsigned int fd, uid_t user, gid_t group)
{
	long retval = n long sys_fchown(fd,user,group);
	return retval;
}

extern long hook_lchown(const char __user *filename, uid_t user, gid_t group)
{
	long retval = n long sys_lchown(filename,user,group);
	return retval;
}

extern long hook_umask(int mask)
{
	long retval = n long sys_umask(mask);
	return retval;
}

extern long hook_gettimeofday(struct timeval __user *tv, struct timezone __user *tz)
{
	long retval = n long sys_gettimeofday(tv,tz);
	return retval;
}

extern long hook_getrlimit(unsigned int resource, struct rlimit __user *rlim)
{
	long retval = n long sys_getrlimit(resource,rlim);
	return retval;
}

extern long hook_getrusage(int who, struct rusage __user *ru)
{
	long retval = n long sys_getrusage(who,ru);
	return retval;
}

extern long hook_sysinfo(struct sysinfo __user *info)
{
	long retval = n long sys_sysinfo(info);
	return retval;
}

extern long hook_times(struct tms __user *tbuf)
{
	long retval = n long sys_times(tbuf);
	return retval;
}

extern long hook_ptrace(long request, long pid, long addr, long data)
{
	long retval = n long sys_ptrace(request,pid,addr,data);
	return retval;
}

extern long hook_getuid(void)
{
	long retval = n long sys_getuid();
	return retval;
}

extern long hook_syslog(int type, char __user *buf, int len)
{
	long retval = n long sys_syslog(type,buf,len);
	return retval;
}

extern long hook_getgid(void)
{
	long retval = n long sys_getgid();
	return retval;
}

extern long hook_setuid(uid_t uid)
{
	long retval = n long sys_setuid(uid);
	return retval;
}

extern long hook_setgid(gid_t gid)
{
	long retval = n long sys_setgid(gid);
	return retval;
}

extern long hook_geteuid(void)
{
	long retval = n long sys_geteuid();
	return retval;
}

extern long hook_getegid(void)
{
	long retval = n long sys_getegid();
	return retval;
}

extern long hook_setpgid(pid_t pid, pid_t pgid)
{
	long retval = n long sys_setpgid(pid,pgid);
	return retval;
}

extern long hook_getppid(void)
{
	long retval = n long sys_getppid();
	return retval;
}

extern long hook_getpgrp(void)
{
	long retval = n long sys_getpgrp();
	return retval;
}

extern long hook_setsid(void)
{
	long retval = n long sys_setsid();
	return retval;
}

extern long hook_setreuid(uid_t ruid, uid_t euid)
{
	long retval = n long sys_setreuid(ruid,euid);
	return retval;
}

extern long hook_setregid(gid_t rgid, gid_t egid)
{
	long retval = n long sys_setregid(rgid,egid);
	return retval;
}

extern long hook_getgroups(int gidsetsize, gid_t __user *grouplist)
{
	long retval = n long sys_getgroups(gidsetsize,grouplist);
	return retval;
}

extern long hook_setgroups(int gidsetsize, gid_t __user *grouplist)
{
	long retval = n long sys_setgroups(gidsetsize,grouplist);
	return retval;
}

extern long hook_setresuid(uid_t ruid, uid_t euid, uid_t suid)
{
	long retval = n long sys_setresuid(ruid,euid,suid);
	return retval;
}

extern long hook_getresuid(uid_t __user *ruid, uid_t __user *euid, uid_t __user *suid)
{
	long retval = n long sys_getresuid(ruid,euid,suid);
	return retval;
}

extern long hook_setresgid(gid_t rgid, gid_t egid, gid_t sgid)
{
	long retval = n long sys_setresgid(rgid,egid,sgid);
	return retval;
}

extern long hook_getresgid(gid_t __user *rgid, gid_t __user *egid, gid_t __user *sgid)
{
	long retval = n long sys_getresgid(rgid,egid,sgid);
	return retval;
}

extern long hook_getpgid(pid_t pid)
{
	long retval = n long sys_getpgid(pid);
	return retval;
}

extern long hook_setfsuid(uid_t uid)
{
	long retval = n long sys_setfsuid(uid);
	return retval;
}

extern long hook_setfsgid(gid_t gid)
{
	long retval = n long sys_setfsgid(gid);
	return retval;
}

extern long hook_getsid(pid_t pid)
{
	long retval = n long sys_getsid(pid);
	return retval;
}

extern long hook_capget(cap_user_header_t header, cap_user_data_t dataptr)
{
	long retval = n long sys_capget(header,dataptr);
	return retval;
}

extern long hook_capset(cap_user_header_t header, const cap_user_data_t data)
{
	long retval = n long sys_capset(header,data);
	return retval;
}

extern long hook_rt_sigpending(sigset_t __user *set, size_t sigsetsize)
{
	long retval = n long sys_rt_sigpending(set,sigsetsize);
	return retval;
}

extern long hook_rt_sigtimedwait(const sigset_t __user *uthese, siginfo_t __user *uinfo, const struct timespec __user *uts, size_t sigsetsize)
{
	long retval = n long sys_rt_sigtimedwait(uthese,uinfo,uts,sigsetsize);
	return retval;
}

extern long hook_rt_sigqueueinfo(int pid, int sig, siginfo_t __user *uinfo)
{
	long retval = n long sys_rt_sigqueueinfo(pid,sig,uinfo);
	return retval;
}

extern long hook_rt_sigsuspend(sigset_t __user *unewset, size_t sigsetsize)
{
	long retval = n long sys_rt_sigsuspend(unewset,sigsetsize);
	return retval;
}

extern long hook_sigaltstack(const stack_t __user *arg0, stack_t __user *arg1, struct pt_regs *arg2)
{
	long retval = n long sys_sigaltstack(arg0,arg1,arg2);
	return retval;
}

extern long hook_utime(char __user *filename, struct utimbuf __user *times)
{
	long retval = n long sys_utime(filename,times);
	return retval;
}

extern long hook_mknod(const char __user *filename, int mode, unsigned dev)
{
	long retval = n long sys_mknod(filename,mode,dev);
	return retval;
}

extern long hook_uselib(const char __user *library)
{
	long retval = n long sys_uselib(library);
	return retval;
}

extern long hook_personality(unsigned int personality)
{
	long retval = n long sys_personality(personality);
	return retval;
}

extern long hook_ustat(unsigned dev, struct ustat __user *ubuf)
{
	long retval = n long sys_ustat(dev,ubuf);
	return retval;
}

extern long hook_statfs(const char __user * path, struct statfs __user *buf)
{
	long retval = n long sys_statfs(path,buf);
	return retval;
}

extern long hook_fstatfs(unsigned int fd, struct statfs __user *buf)
{
	long retval = n long sys_fstatfs(fd,buf);
	return retval;
}

extern long hook_sysfs(int option, unsigned long arg1, unsigned long arg2)
{
	long retval = n long sys_sysfs(option,arg1,arg2);
	return retval;
}

extern long hook_getpriority(int which, int who)
{
	long retval = n long sys_getpriority(which,who);
	return retval;
}

extern long hook_setpriority(int which, int who, int niceval)
{
	long retval = n long sys_setpriority(which,who,niceval);
	return retval;
}

extern long hook_sched_setparam(pid_t pid, struct sched_param __user *param)
{
	long retval = n long sys_sched_setparam(pid,param);
	return retval;
}

extern long hook_sched_getparam(pid_t pid, struct sched_param __user *param)
{
	long retval = n long sys_sched_getparam(pid,param);
	return retval;
}

extern long hook_sched_setscheduler(pid_t pid, int policy, struct sched_param __user *param)
{
	long retval = n long sys_sched_setscheduler(pid,policy,param);
	return retval;
}

extern long hook_sched_getscheduler(pid_t pid)
{
	long retval = n long sys_sched_getscheduler(pid);
	return retval;
}

extern long hook_sched_get_priority_max(int policy)
{
	long retval = n long sys_sched_get_priority_max(policy);
	return retval;
}

extern long hook_sched_get_priority_min(int policy)
{
	long retval = n long sys_sched_get_priority_min(policy);
	return retval;
}

extern long hook_sched_rr_get_interval(pid_t pid, struct timespec __user *interval)
{
	long retval = n long sys_sched_rr_get_interval(pid,interval);
	return retval;
}

extern long hook_mlock(unsigned long start, size_t len)
{
	long retval = n long sys_mlock(start,len);
	return retval;
}

extern long hook_munlock(unsigned long start, size_t len)
{
	long retval = n long sys_munlock(start,len);
	return retval;
}

extern long hook_mlockall(int flags)
{
	long retval = n long sys_mlockall(flags);
	return retval;
}

extern long hook_munlockall(void)
{
	long retval = n long sys_munlockall();
	return retval;
}

extern long hook_vhangup(void)
{
	long retval = n long sys_vhangup();
	return retval;
}

extern long hook_pivot_root(const char __user *new_root, const char __user *put_old)
{
	long retval = n long sys_pivot_root(new_root,put_old);
	return retval;
}

extern long hook_prctl(int option, unsigned long arg2, unsigned long arg3, unsigned long arg4, unsigned long arg5)
{
	long retval = n long sys_prctl(option,arg2,arg3,arg4,arg5);
	return retval;
}

extern long hook_adjtimex(struct timex __user *txc_p)
{
	long retval = n long sys_adjtimex(txc_p);
	return retval;
}

extern long hook_setrlimit(unsigned int resource, struct rlimit __user *rlim)
{
	long retval = n long sys_setrlimit(resource,rlim);
	return retval;
}

extern long hook_chroot(const char __user *filename)
{
	long retval = n long sys_chroot(filename);
	return retval;
}

extern long hook_sync(void)
{
	long retval = n long sys_sync();
	return retval;
}

extern long hook_acct(const char __user *name)
{
	long retval = n long sys_acct(name);
	return retval;
}

extern long hook_settimeofday(struct timeval __user *tv, struct timezone __user *tz)
{
	long retval = n long sys_settimeofday(tv,tz);
	return retval;
}

extern long hook_mount(char __user *dev_name, char __user *dir_name, char __user *type, unsigned long flags, void __user *data)
{
	long retval = n long sys_mount(dev_name,dir_name,type,flags,data);
	return retval;
}

extern long hook_swapon(const char __user *specialfile, int swap_flags)
{
	long retval = n long sys_swapon(specialfile,swap_flags);
	return retval;
}

extern long hook_swapoff(const char __user *specialfile)
{
	long retval = n long sys_swapoff(specialfile);
	return retval;
}

extern long hook_reboot(int magic1, int magic2, unsigned int cmd, void __user *arg)
{
	long retval = n long sys_reboot(magic1,magic2,cmd,arg);
	return retval;
}

extern long hook_sethostname(char __user *name, int len)
{
	long retval = n long sys_sethostname(name,len);
	return retval;
}

extern long hook_setdomainname(char __user *name, int len)
{
	long retval = n long sys_setdomainname(name,len);
	return retval;
}

extern long hook_iopl(unsigned int arg0, struct pt_regs *arg1)
{
	long retval = n long sys_iopl(arg0,arg1);
	return retval;
}

extern long hook_ioperm(unsigned long arg0, unsigned long arg1, int arg2)
{
	long retval = n long sys_ioperm(arg0,arg1,arg2);
	return retval;
}

extern long hook_init_module(void __user *umod, unsigned long len, const char __user *uargs)
{
	long retval = n long sys_init_module(umod,len,uargs);
	return retval;
}

extern long hook_delete_module(const char __user *name_user, unsigned int flags)
{
	long retval = n long sys_delete_module(name_user,flags);
	return retval;
}

extern long hook_quotactl(unsigned int cmd, const char __user *special, qid_t id, void __user *addr)
{
	long retval = n long sys_quotactl(cmd,special,id,addr);
	return retval;
}

extern long hook_nfsservctl(int cmd, struct nfsctl_arg __user *arg, void __user *res)
{
	long retval = n long sys_nfsservctl(cmd,arg,res);
	return retval;
}

extern long hook_gettid(void)
{
	long retval = n long sys_gettid();
	return retval;
}

extern long hook_readahead(int fd, loff_t offset, size_t count)
{
	long retval = n long sys_readahead(fd,offset,count);
	return retval;
}

extern long hook_setxattr(const char __user *path, const char __user *name,      const void __user *value, size_t size, int flags)
{
	long retval = n long sys_setxattr(path,name,value,size,flags);
	return retval;
}

extern long hook_lsetxattr(const char __user *path, const char __user *name,       const void __user *value, size_t size, int flags)
{
	long retval = n long sys_lsetxattr(path,name,value,size,flags);
	return retval;
}

extern long hook_fsetxattr(int fd, const char __user *name,       const void __user *value, size_t size, int flags)
{
	long retval = n long sys_fsetxattr(fd,name,value,size,flags);
	return retval;
}

extern long hook_getxattr(const char __user *path, const char __user *name,      void __user *value, size_t size)
{
	long retval = n long sys_getxattr(path,name,value,size);
	return retval;
}

extern long hook_lgetxattr(const char __user *path, const char __user *name,       void __user *value, size_t size)
{
	long retval = n long sys_lgetxattr(path,name,value,size);
	return retval;
}

extern long hook_fgetxattr(int fd, const char __user *name,       void __user *value, size_t size)
{
	long retval = n long sys_fgetxattr(fd,name,value,size);
	return retval;
}

extern long hook_listxattr(const char __user *path, char __user *list,       size_t size)
{
	long retval = n long sys_listxattr(path,list,size);
	return retval;
}

extern long hook_llistxattr(const char __user *path, char __user *list,        size_t size)
{
	long retval = n long sys_llistxattr(path,list,size);
	return retval;
}

extern long hook_flistxattr(int fd, char __user *list, size_t size)
{
	long retval = n long sys_flistxattr(fd,list,size);
	return retval;
}

extern long hook_removexattr(const char __user *path, const char __user *name)
{
	long retval = n long sys_removexattr(path,name);
	return retval;
}

extern long hook_lremovexattr(const char __user *path,  const char __user *name)
{
	long retval = n long sys_lremovexattr(path,name);
	return retval;
}

extern long hook_fremovexattr(int fd, const char __user *name)
{
	long retval = n long sys_fremovexattr(fd,name);
	return retval;
}

extern long hook_tkill(int pid, int sig)
{
	long retval = n long sys_tkill(pid,sig);
	return retval;
}

extern long hook_time(time_t __user *tloc)
{
	long retval = n long sys_time(tloc);
	return retval;
}

extern long hook_futex(u32 __user *uaddr, int op, u32 val, struct timespec __user *utime, u32 __user *uaddr2, u32 val3)
{
	long retval = n long sys_futex(uaddr,op,val,utime,uaddr2,val3);
	return retval;
}

extern long hook_sched_setaffinity(pid_t pid, unsigned int len, unsigned long __user *user_mask_ptr)
{
	long retval = n long sys_sched_setaffinity(pid,len,user_mask_ptr);
	return retval;
}

extern long hook_sched_getaffinity(pid_t pid, unsigned int len, unsigned long __user *user_mask_ptr)
{
	long retval = n long sys_sched_getaffinity(pid,len,user_mask_ptr);
	return retval;
}

extern long hook_io_setup(unsigned nr_reqs, aio_context_t __user *ctx)
{
	long retval = n long sys_io_setup(nr_reqs,ctx);
	return retval;
}

extern long hook_io_destroy(aio_context_t ctx)
{
	long retval = n long sys_io_destroy(ctx);
	return retval;
}

extern long hook_io_getevents(aio_context_t ctx_id, long min_nr, long nr, struct io_event __user *events, struct timespec __user *timeout)
{
	long retval = n long sys_io_getevents(ctx_id,min_nr,nr,events,timeout);
	return retval;
}

extern long hook_io_submit(aio_context_t arg0, long arg1, struct iocb __user * __user *arg2)
{
	long retval = n long sys_io_submit(arg0,arg1,arg2);
	return retval;
}

extern long hook_io_cancel(aio_context_t ctx_id, struct iocb __user *iocb,       struct io_event __user *result)
{
	long retval = n long sys_io_cancel(ctx_id,iocb,result);
	return retval;
}

extern long hook_lookup_dcookie(u64 cookie64, char __user *buf, size_t len)
{
	long retval = n long sys_lookup_dcookie(cookie64,buf,len);
	return retval;
}

extern long hook_epoll_create(int size)
{
	long retval = n long sys_epoll_create(size);
	return retval;
}

extern long hook_remap_file_pages(unsigned long start, unsigned long size, unsigned long prot, unsigned long pgoff, unsigned long flags)
{
	long retval = n long sys_remap_file_pages(start,size,prot,pgoff,flags);
	return retval;
}

extern long hook_getdents64(unsigned int fd, struct linux_dirent64 __user *dirent, unsigned int count)
{
	long retval = n long sys_getdents64(fd,dirent,count);
	return retval;
}

extern long hook_set_tid_address(int __user *tidptr)
{
	long retval = n long sys_set_tid_address(tidptr);
	return retval;
}

extern long hook_restart_syscall(void)
{
	long retval = n long sys_restart_syscall();
	return retval;
}

extern long hook_semtimedop(int semid, struct sembuf __user *sops, unsigned nsops, const struct timespec __user *timeout)
{
	long retval = n long sys_semtimedop(semid,sops,nsops,timeout);
	return retval;
}

extern long hook_fadvise64(int fd, loff_t offset, size_t len, int advice)
{
	long retval = n long sys_fadvise64(fd,offset,len,advice);
	return retval;
}

extern long hook_timer_create(clockid_t which_clock,  struct sigevent __user *timer_event_spec,  timer_t __user * created_timer_id)
{
	long retval = n long sys_timer_create(which_clock,timer_event_spec,created_timer_id);
	return retval;
}

extern long hook_timer_settime(timer_t timer_id, int flags, const struct itimerspec __user *new_setting, struct itimerspec __user *old_setting)
{
	long retval = n long sys_timer_settime(timer_id,flags,new_setting,old_setting);
	return retval;
}

extern long hook_timer_gettime(timer_t timer_id, struct itimerspec __user *setting)
{
	long retval = n long sys_timer_gettime(timer_id,setting);
	return retval;
}

extern long hook_timer_getoverrun(timer_t timer_id)
{
	long retval = n long sys_timer_getoverrun(timer_id);
	return retval;
}

extern long hook_timer_delete(timer_t timer_id)
{
	long retval = n long sys_timer_delete(timer_id);
	return retval;
}

extern long hook_clock_settime(clockid_t which_clock, const struct timespec __user *tp)
{
	long retval = n long sys_clock_settime(which_clock,tp);
	return retval;
}

extern long hook_clock_gettime(clockid_t which_clock, struct timespec __user *tp)
{
	long retval = n long sys_clock_gettime(which_clock,tp);
	return retval;
}

extern long hook_clock_getres(clockid_t which_clock, struct timespec __user *tp)
{
	long retval = n long sys_clock_getres(which_clock,tp);
	return retval;
}

extern long hook_clock_nanosleep(clockid_t which_clock, int flags, const struct timespec __user *rqtp, struct timespec __user *rmtp)
{
	long retval = n long sys_clock_nanosleep(which_clock,flags,rqtp,rmtp);
	return retval;
}

extern long hook_exit_group(int error_code)
{
	long retval = n long sys_exit_group(error_code);
	return retval;
}

extern long hook_epoll_wait(int epfd, struct epoll_event __user *events, int maxevents, int timeout)
{
	long retval = n long sys_epoll_wait(epfd,events,maxevents,timeout);
	return retval;
}

extern long hook_epoll_ctl(int epfd, int op, int fd, struct epoll_event __user *event)
{
	long retval = n long sys_epoll_ctl(epfd,op,fd,event);
	return retval;
}

extern long hook_tgkill(int tgid, int pid, int sig)
{
	long retval = n long sys_tgkill(tgid,pid,sig);
	return retval;
}

extern long hook_utimes(char __user *filename, struct timeval __user *utimes)
{
	long retval = n long sys_utimes(filename,utimes);
	return retval;
}

extern long hook_mbind(unsigned long start, unsigned long len, unsigned long mode, unsigned long __user *nmask, unsigned long maxnode, unsigned flags)
{
	long retval = n long sys_mbind(start,len,mode,nmask,maxnode,flags);
	return retval;
}

extern long hook_set_mempolicy(int mode, unsigned long __user *nmask, unsigned long maxnode)
{
	long retval = n long sys_set_mempolicy(mode,nmask,maxnode);
	return retval;
}

extern long hook_get_mempolicy(int __user *policy, unsigned long __user *nmask, unsigned long maxnode, unsigned long addr, unsigned long flags)
{
	long retval = n long sys_get_mempolicy(policy,nmask,maxnode,addr,flags);
	return retval;
}

extern long hook_mq_open(const char __user *name, int oflag, mode_t mode, struct mq_attr __user *attr)
{
	long retval = n long sys_mq_open(name,oflag,mode,attr);
	return retval;
}

extern long hook_mq_unlink(const char __user *name)
{
	long retval = n long sys_mq_unlink(name);
	return retval;
}

extern long hook_mq_timedsend(mqd_t mqdes, const char __user *msg_ptr, size_t msg_len, unsigned int msg_prio, const struct timespec __user *abs_timeout)
{
	long retval = n long sys_mq_timedsend(mqdes,msg_ptr,msg_len,msg_prio,abs_timeout);
	return retval;
}

extern long hook_mq_timedreceive(mqd_t mqdes, char __user *msg_ptr, size_t msg_len, unsigned int __user *msg_prio, const struct timespec __user *abs_timeout)
{
	long retval = n long sys_mq_timedreceive(mqdes,msg_ptr,msg_len,msg_prio,abs_timeout);
	return retval;
}

extern long hook_mq_notify(mqd_t mqdes, const struct sigevent __user *notification)
{
	long retval = n long sys_mq_notify(mqdes,notification);
	return retval;
}

extern long hook_mq_getsetattr(mqd_t mqdes, const struct mq_attr __user *mqstat, struct mq_attr __user *omqstat)
{
	long retval = n long sys_mq_getsetattr(mqdes,mqstat,omqstat);
	return retval;
}

extern long hook_kexec_load(unsigned long entry, unsigned long nr_segments, struct kexec_segment __user *segments, unsigned long flags)
{
	long retval = n long sys_kexec_load(entry,nr_segments,segments,flags);
	return retval;
}

extern long hook_waitid(int which, pid_t pid,    struct siginfo __user *infop,    int options, struct rusage __user *ru)
{
	long retval = n long sys_waitid(which,pid,infop,options,ru);
	return retval;
}

extern long hook_add_key(const char __user *_type,     const char __user *_description,     const void __user *_payload,     size_t plen,     key_serial_t destringid)
{
	long retval = n long sys_add_key(_type,_description,_payload,plen,destringid);
	return retval;
}

extern long hook_request_key(const char __user *_type, const char __user *_description, const char __user *_callout_info, key_serial_t destringid)
{
	long retval = n long sys_request_key(_type,_description,_callout_info,destringid);
	return retval;
}

extern long hook_keyctl(int cmd, unsigned long arg2, unsigned long arg3,    unsigned long arg4, unsigned long arg5)
{
	long retval = n long sys_keyctl(cmd,arg2,arg3,arg4,arg5);
	return retval;
}

extern long hook_ioprio_set(int which, int who, int ioprio)
{
	long retval = n long sys_ioprio_set(which,who,ioprio);
	return retval;
}

extern long hook_ioprio_get(int which, int who)
{
	long retval = n long sys_ioprio_get(which,who);
	return retval;
}

extern long hook_inotify_init(void)
{
	long retval = n long sys_inotify_init();
	return retval;
}

extern long hook_inotify_add_watch(int fd, const char __user *path, u32 mask)
{
	long retval = n long sys_inotify_add_watch(fd,path,mask);
	return retval;
}

extern long hook_inotify_rm_watch(int fd, __s32 wd)
{
	long retval = n long sys_inotify_rm_watch(fd,wd);
	return retval;
}

extern long hook_migrate_pages(pid_t pid, unsigned long maxnode, const unsigned long __user *from, const unsigned long __user *to)
{
	long retval = n long sys_migrate_pages(pid,maxnode,from,to);
	return retval;
}

extern long hook_openat(int dfd, const char __user *filename, int flags,    int mode)
{
	long retval = n long sys_openat(dfd,filename,flags,mode);
	return retval;
}

extern long hook_mkdirat(int dfd, const char __user * pathname, int mode)
{
	long retval = n long sys_mkdirat(dfd,pathname,mode);
	return retval;
}

extern long hook_mknodat(int dfd, const char __user * filename, int mode,     unsigned dev)
{
	long retval = n long sys_mknodat(dfd,filename,mode,dev);
	return retval;
}

extern long hook_fchownat(int dfd, const char __user *filename, uid_t user,      gid_t group, int flag)
{
	long retval = n long sys_fchownat(dfd,filename,user,group,flag);
	return retval;
}

extern long hook_futimesat(int dfd, char __user *filename,       struct timeval __user *utimes)
{
	long retval = n long sys_futimesat(dfd,filename,utimes);
	return retval;
}

extern long hook_newfstatat(int dfd, char __user *filename,        struct stat __user *statbuf, int flag)
{
	long retval = n long sys_newfstatat(dfd,filename,statbuf,flag);
	return retval;
}

extern long hook_unlinkat(int dfd, const char __user * pathname, int flag)
{
	long retval = n long sys_unlinkat(dfd,pathname,flag);
	return retval;
}

extern long hook_renameat(int olddfd, const char __user * oldname,      int newdfd, const char __user * newname)
{
	long retval = n long sys_renameat(olddfd,oldname,newdfd,newname);
	return retval;
}

extern long hook_linkat(int olddfd, const char __user *oldname,    int newdfd, const char __user *newname, int flags)
{
	long retval = n long sys_linkat(olddfd,oldname,newdfd,newname,flags);
	return retval;
}

extern long hook_symlinkat(const char __user * oldname,       int newdfd, const char __user * newname)
{
	long retval = n long sys_symlinkat(oldname,newdfd,newname);
	return retval;
}

extern long hook_readlinkat(int dfd, const char __user *path, char __user *buf,        int bufsiz)
{
	long retval = n long sys_readlinkat(dfd,path,buf,bufsiz);
	return retval;
}

extern long hook_fchmodat(int dfd, const char __user * filename,      mode_t mode)
{
	long retval = n long sys_fchmodat(dfd,filename,mode);
	return retval;
}

extern long hook_faccessat(int dfd, const char __user *filename, int mode)
{
	long retval = n long sys_faccessat(dfd,filename,mode);
	return retval;
}

extern long hook_pselect6(int arg0, fd_set __user *arg1, fd_set __user *arg2,      fd_set __user *arg3, struct timespec __user *arg4,      void __user *arg5)
{
	long retval = n long sys_pselect6(arg0,arg1,arg2,arg3,arg4,arg5);
	return retval;
}

extern long hook_ppoll(struct pollfd __user *arg0, unsigned int arg1,   struct timespec __user *arg2, const sigset_t __user *arg3,   size_t arg4)
{
	long retval = n long sys_ppoll(arg0,arg1,arg2,arg3,arg4);
	return retval;
}

extern long hook_unshare(unsigned long unshare_flags)
{
	long retval = n long sys_unshare(unshare_flags);
	return retval;
}

extern long hook_set_robust_list(struct robust_list_head __user *head,     size_t len)
{
	long retval = n long sys_set_robust_list(head,len);
	return retval;
}

extern long hook_get_robust_list(int pid,     struct robust_list_head __user * __user *head_ptr,     size_t __user *len_ptr)
{
	long retval = n long sys_get_robust_list(pid,head_ptr,len_ptr);
	return retval;
}

extern long hook_splice(int fd_in, loff_t __user *off_in,    int fd_out, loff_t __user *off_out,    size_t len, unsigned int flags)
{
	long retval = n long sys_splice(fd_in,off_in,fd_out,off_out,len,flags);
	return retval;
}

extern long hook_tee(int fdin, int fdout, size_t len, unsigned int flags)
{
	long retval = n long sys_tee(fdin,fdout,len,flags);
	return retval;
}

extern long hook_sync_file_range(int fd, loff_t offset, loff_t nbytes, unsigned int flags)
{
	long retval = n long sys_sync_file_range(fd,offset,nbytes,flags);
	return retval;
}

extern long hook_vmsplice(int fd, const struct iovec __user *iov,      unsigned long nr_segs, unsigned int flags)
{
	long retval = n long sys_vmsplice(fd,iov,nr_segs,flags);
	return retval;
}

extern long hook_move_pages(pid_t pid, unsigned long nr_pages, const void __user * __user *pages, const int __user *nodes, int __user *status, int flags)
{
	long retval = n long sys_move_pages(pid,nr_pages,pages,nodes,status,flags);
	return retval;
}

extern long hook_utimensat(int dfd, char __user *filename, struct timespec __user *utimes, int flags)
{
	long retval = n long sys_utimensat(dfd,filename,utimes,flags);
	return retval;
}

extern long hook_epoll_pwait(int epfd, struct epoll_event __user *events, int maxevents, int timeout, const sigset_t __user *sigmask, size_t sigsetsize)
{
	long retval = n long sys_epoll_pwait(epfd,events,maxevents,timeout,sigmask,sigsetsize);
	return retval;
}

extern long hook_signalfd(int ufd, sigset_t __user *user_mask, size_t sizemask)
{
	long retval = n long sys_signalfd(ufd,user_mask,sizemask);
	return retval;
}

extern long hook_timerfd_create(int clockid, int flags)
{
	long retval = n long sys_timerfd_create(clockid,flags);
	return retval;
}

extern long hook_eventfd(unsigned int count)
{
	long retval = n long sys_eventfd(count);
	return retval;
}

extern long hook_fallocate(int fd, int mode, loff_t offset, loff_t len)
{
	long retval = n long sys_fallocate(fd,mode,offset,len);
	return retval;
}

extern long hook_timerfd_settime(int ufd, int flags,     const struct itimerspec __user *utmr,     struct itimerspec __user *otmr)
{
	long retval = n long sys_timerfd_settime(ufd,flags,utmr,otmr);
	return retval;
}

extern long hook_timerfd_gettime(int ufd, struct itimerspec __user *otmr)
{
	long retval = n long sys_timerfd_gettime(ufd,otmr);
	return retval;
}

extern long hook_accept4(int arg0, struct sockaddr __user *arg1, int __user *arg2, int arg3)
{
	long retval = n long sys_accept4(arg0,arg1,arg2,arg3);
	return retval;
}

extern long hook_signalfd4(int ufd, sigset_t __user *user_mask, size_t sizemask, int flags)
{
	long retval = n long sys_signalfd4(ufd,user_mask,sizemask,flags);
	return retval;
}

extern long hook_eventfd2(unsigned int count, int flags)
{
	long retval = n long sys_eventfd2(count,flags);
	return retval;
}

extern long hook_epoll_create1(int flags)
{
	long retval = n long sys_epoll_create1(flags);
	return retval;
}

extern long hook_dup3(unsigned int oldfd, unsigned int newfd, int flags)
{
	long retval = n long sys_dup3(oldfd,newfd,flags);
	return retval;
}

extern long hook_pipe2(int __user *fildes, int flags)
{
	long retval = n long sys_pipe2(fildes,flags);
	return retval;
}

extern long hook_inotify_init1(int flags)
{
	long retval = n long sys_inotify_init1(flags);
	return retval;
}

extern long hook_preadv(unsigned long fd, const struct iovec __user *vec,    unsigned long vlen, unsigned long pos_l, unsigned long pos_h)
{
	long retval = n long sys_preadv(fd,vec,vlen,pos_l,pos_h);
	return retval;
}

extern long hook_pwritev(unsigned long fd, const struct iovec __user *vec,     unsigned long vlen, unsigned long pos_l, unsigned long pos_h)
{
	long retval = n long sys_pwritev(fd,vec,vlen,pos_l,pos_h);
	return retval;
}

extern long hook_rt_tgsigqueueinfo(pid_t tgid, pid_t  pid, int sig, siginfo_t __user *uinfo)
{
	long retval = n long sys_rt_tgsigqueueinfo(tgid,pid,sig,uinfo);
	return retval;
}

extern long hook_perf_event_open( struct perf_event_attr __user *attr_uptr, pid_t pid, int cpu, int group_fd, unsigned long flags)
{
	long retval = n long sys_perf_event_open(attr_uptr,pid,cpu,group_fd,flags);
	return retval;
}

extern long hook_recvmmsg(int fd, struct mmsghdr __user *msg,      unsigned int vlen, unsigned flags,      struct timespec __user *timeout)
{
	long retval = n long sys_recvmmsg(fd,msg,vlen,flags,timeout);
	return retval;
}

extern long hook_clock_adjtime(clockid_t which_clock, struct timex __user *tx)
{
	long retval = n long sys_clock_adjtime(which_clock,tx);
	return retval;
}

extern long hook_syncfs(int fd)
{
	long retval = n long sys_syncfs(fd);
	return retval;
}

extern long hook_sendmmsg(int fd, struct mmsghdr __user *msg,      unsigned int vlen, unsigned flags)
{
	long retval = n long sys_sendmmsg(fd,msg,vlen,flags);
	return retval;
}

extern long hook_process_vm_readv(pid_t pid,      const struct iovec __user *lvec,      unsigned long liovcnt,      const struct iovec __user *rvec,      unsigned long riovcnt,      unsigned long flags)
{
	long retval = n long sys_process_vm_readv(pid,lvec,liovcnt,rvec,riovcnt,flags);
	return retval;
}

extern long hook_process_vm_writev(pid_t pid,       const struct iovec __user *lvec,       unsigned long liovcnt,       const struct iovec __user *rvec,       unsigned long riovcnt,       unsigned long flags)
{
	long retval = n long sys_process_vm_writev(pid,lvec,liovcnt,rvec,riovcnt,flags);
	return retval;
}
void reg_hooks(unsigned long **sys_call_table)
{
	sys_call_table[__NR_read] = (void *)hook_read;
	sys_call_table[__NR_write] = (void *)hook_write;
	sys_call_table[__NR_open] = (void *)hook_open;
	sys_call_table[__NR_close] = (void *)hook_close;
	sys_call_table[__NR_stat] = (void *)hook_stat;
	sys_call_table[__NR_fstat] = (void *)hook_fstat;
	sys_call_table[__NR_lstat] = (void *)hook_lstat;
	sys_call_table[__NR_poll] = (void *)hook_poll;
	sys_call_table[__NR_lseek] = (void *)hook_lseek;
	sys_call_table[__NR_mmap] = (void *)hook_mmap;
	sys_call_table[__NR_mprotect] = (void *)hook_mprotect;
	sys_call_table[__NR_munmap] = (void *)hook_munmap;
	sys_call_table[__NR_brk] = (void *)hook_brk;
	sys_call_table[__NR_rt_sigaction] = (void *)hook_rt_sigaction;
	sys_call_table[__NR_rt_sigprocmask] = (void *)hook_rt_sigprocmask;
	sys_call_table[__NR_rt_sigreturn] = (void *)hook_rt_sigreturn;
	sys_call_table[__NR_ioctl] = (void *)hook_ioctl;
	sys_call_table[__NR_pread64] = (void *)hook_pread64;
	sys_call_table[__NR_pwrite64] = (void *)hook_pwrite64;
	sys_call_table[__NR_readv] = (void *)hook_readv;
	sys_call_table[__NR_writev] = (void *)hook_writev;
	sys_call_table[__NR_access] = (void *)hook_access;
	sys_call_table[__NR_pipe] = (void *)hook_pipe;
	sys_call_table[__NR_select] = (void *)hook_select;
	sys_call_table[__NR_sched_yield] = (void *)hook_sched_yield;
	sys_call_table[__NR_mremap] = (void *)hook_mremap;
	sys_call_table[__NR_msync] = (void *)hook_msync;
	sys_call_table[__NR_mincore] = (void *)hook_mincore;
	sys_call_table[__NR_madvise] = (void *)hook_madvise;
	sys_call_table[__NR_shmget] = (void *)hook_shmget;
	sys_call_table[__NR_shmat] = (void *)hook_shmat;
	sys_call_table[__NR_shmctl] = (void *)hook_shmctl;
	sys_call_table[__NR_dup] = (void *)hook_dup;
	sys_call_table[__NR_dup2] = (void *)hook_dup2;
	sys_call_table[__NR_pause] = (void *)hook_pause;
	sys_call_table[__NR_nanosleep] = (void *)hook_nanosleep;
	sys_call_table[__NR_getitimer] = (void *)hook_getitimer;
	sys_call_table[__NR_alarm] = (void *)hook_alarm;
	sys_call_table[__NR_setitimer] = (void *)hook_setitimer;
	sys_call_table[__NR_getpid] = (void *)hook_getpid;
	sys_call_table[__NR_sendfile] = (void *)hook_sendfile;
	sys_call_table[__NR_socket] = (void *)hook_socket;
	sys_call_table[__NR_connect] = (void *)hook_connect;
	sys_call_table[__NR_accept] = (void *)hook_accept;
	sys_call_table[__NR_sendto] = (void *)hook_sendto;
	sys_call_table[__NR_recvfrom] = (void *)hook_recvfrom;
	sys_call_table[__NR_sendmsg] = (void *)hook_sendmsg;
	sys_call_table[__NR_recvmsg] = (void *)hook_recvmsg;
	sys_call_table[__NR_shutdown] = (void *)hook_shutdown;
	sys_call_table[__NR_bind] = (void *)hook_bind;
	sys_call_table[__NR_listen] = (void *)hook_listen;
	sys_call_table[__NR_getsockname] = (void *)hook_getsockname;
	sys_call_table[__NR_getpeername] = (void *)hook_getpeername;
	sys_call_table[__NR_socketpair] = (void *)hook_socketpair;
	sys_call_table[__NR_setsockopt] = (void *)hook_setsockopt;
	sys_call_table[__NR_getsockopt] = (void *)hook_getsockopt;
	sys_call_table[__NR_clone] = (void *)hook_clone;
	sys_call_table[__NR_fork] = (void *)hook_fork;
	sys_call_table[__NR_vfork] = (void *)hook_vfork;
	sys_call_table[__NR_execve] = (void *)hook_execve;
	sys_call_table[__NR_exit] = (void *)hook_exit;
	sys_call_table[__NR_wait4] = (void *)hook_wait4;
	sys_call_table[__NR_kill] = (void *)hook_kill;
	sys_call_table[__NR_uname] = (void *)hook_uname;
	sys_call_table[__NR_semget] = (void *)hook_semget;
	sys_call_table[__NR_semop] = (void *)hook_semop;
	sys_call_table[__NR_semctl] = (void *)hook_semctl;
	sys_call_table[__NR_shmdt] = (void *)hook_shmdt;
	sys_call_table[__NR_msgget] = (void *)hook_msgget;
	sys_call_table[__NR_msgsnd] = (void *)hook_msgsnd;
	sys_call_table[__NR_msgrcv] = (void *)hook_msgrcv;
	sys_call_table[__NR_msgctl] = (void *)hook_msgctl;
	sys_call_table[__NR_fcntl] = (void *)hook_fcntl;
	sys_call_table[__NR_flock] = (void *)hook_flock;
	sys_call_table[__NR_fsync] = (void *)hook_fsync;
	sys_call_table[__NR_fdatasync] = (void *)hook_fdatasync;
	sys_call_table[__NR_truncate] = (void *)hook_truncate;
	sys_call_table[__NR_ftruncate] = (void *)hook_ftruncate;
	sys_call_table[__NR_getdents] = (void *)hook_getdents;
	sys_call_table[__NR_getcwd] = (void *)hook_getcwd;
	sys_call_table[__NR_chdir] = (void *)hook_chdir;
	sys_call_table[__NR_fchdir] = (void *)hook_fchdir;
	sys_call_table[__NR_rename] = (void *)hook_rename;
	sys_call_table[__NR_mkdir] = (void *)hook_mkdir;
	sys_call_table[__NR_rmdir] = (void *)hook_rmdir;
	sys_call_table[__NR_creat] = (void *)hook_creat;
	sys_call_table[__NR_link] = (void *)hook_link;
	sys_call_table[__NR_unlink] = (void *)hook_unlink;
	sys_call_table[__NR_symlink] = (void *)hook_symlink;
	sys_call_table[__NR_readlink] = (void *)hook_readlink;
	sys_call_table[__NR_chmod] = (void *)hook_chmod;
	sys_call_table[__NR_fchmod] = (void *)hook_fchmod;
	sys_call_table[__NR_chown] = (void *)hook_chown;
	sys_call_table[__NR_fchown] = (void *)hook_fchown;
	sys_call_table[__NR_lchown] = (void *)hook_lchown;
	sys_call_table[__NR_umask] = (void *)hook_umask;
	sys_call_table[__NR_gettimeofday] = (void *)hook_gettimeofday;
	sys_call_table[__NR_getrlimit] = (void *)hook_getrlimit;
	sys_call_table[__NR_getrusage] = (void *)hook_getrusage;
	sys_call_table[__NR_sysinfo] = (void *)hook_sysinfo;
	sys_call_table[__NR_times] = (void *)hook_times;
	sys_call_table[__NR_ptrace] = (void *)hook_ptrace;
	sys_call_table[__NR_getuid] = (void *)hook_getuid;
	sys_call_table[__NR_syslog] = (void *)hook_syslog;
	sys_call_table[__NR_getgid] = (void *)hook_getgid;
	sys_call_table[__NR_setuid] = (void *)hook_setuid;
	sys_call_table[__NR_setgid] = (void *)hook_setgid;
	sys_call_table[__NR_geteuid] = (void *)hook_geteuid;
	sys_call_table[__NR_getegid] = (void *)hook_getegid;
	sys_call_table[__NR_setpgid] = (void *)hook_setpgid;
	sys_call_table[__NR_getppid] = (void *)hook_getppid;
	sys_call_table[__NR_getpgrp] = (void *)hook_getpgrp;
	sys_call_table[__NR_setsid] = (void *)hook_setsid;
	sys_call_table[__NR_setreuid] = (void *)hook_setreuid;
	sys_call_table[__NR_setregid] = (void *)hook_setregid;
	sys_call_table[__NR_getgroups] = (void *)hook_getgroups;
	sys_call_table[__NR_setgroups] = (void *)hook_setgroups;
	sys_call_table[__NR_setresuid] = (void *)hook_setresuid;
	sys_call_table[__NR_getresuid] = (void *)hook_getresuid;
	sys_call_table[__NR_setresgid] = (void *)hook_setresgid;
	sys_call_table[__NR_getresgid] = (void *)hook_getresgid;
	sys_call_table[__NR_getpgid] = (void *)hook_getpgid;
	sys_call_table[__NR_setfsuid] = (void *)hook_setfsuid;
	sys_call_table[__NR_setfsgid] = (void *)hook_setfsgid;
	sys_call_table[__NR_getsid] = (void *)hook_getsid;
	sys_call_table[__NR_capget] = (void *)hook_capget;
	sys_call_table[__NR_capset] = (void *)hook_capset;
	sys_call_table[__NR_rt_sigpending] = (void *)hook_rt_sigpending;
	sys_call_table[__NR_rt_sigtimedwait] = (void *)hook_rt_sigtimedwait;
	sys_call_table[__NR_rt_sigqueueinfo] = (void *)hook_rt_sigqueueinfo;
	sys_call_table[__NR_rt_sigsuspend] = (void *)hook_rt_sigsuspend;
	sys_call_table[__NR_sigaltstack] = (void *)hook_sigaltstack;
	sys_call_table[__NR_utime] = (void *)hook_utime;
	sys_call_table[__NR_mknod] = (void *)hook_mknod;
	sys_call_table[__NR_uselib] = (void *)hook_uselib;
	sys_call_table[__NR_personality] = (void *)hook_personality;
	sys_call_table[__NR_ustat] = (void *)hook_ustat;
	sys_call_table[__NR_statfs] = (void *)hook_statfs;
	sys_call_table[__NR_fstatfs] = (void *)hook_fstatfs;
	sys_call_table[__NR_sysfs] = (void *)hook_sysfs;
	sys_call_table[__NR_getpriority] = (void *)hook_getpriority;
	sys_call_table[__NR_setpriority] = (void *)hook_setpriority;
	sys_call_table[__NR_sched_setparam] = (void *)hook_sched_setparam;
	sys_call_table[__NR_sched_getparam] = (void *)hook_sched_getparam;
	sys_call_table[__NR_sched_setscheduler] = (void *)hook_sched_setscheduler;
	sys_call_table[__NR_sched_getscheduler] = (void *)hook_sched_getscheduler;
	sys_call_table[__NR_sched_get_priority_max] = (void *)hook_sched_get_priority_max;
	sys_call_table[__NR_sched_get_priority_min] = (void *)hook_sched_get_priority_min;
	sys_call_table[__NR_sched_rr_get_interval] = (void *)hook_sched_rr_get_interval;
	sys_call_table[__NR_mlock] = (void *)hook_mlock;
	sys_call_table[__NR_munlock] = (void *)hook_munlock;
	sys_call_table[__NR_mlockall] = (void *)hook_mlockall;
	sys_call_table[__NR_munlockall] = (void *)hook_munlockall;
	sys_call_table[__NR_vhangup] = (void *)hook_vhangup;
	sys_call_table[__NR_modify_ldt] = (void *)hook_modify_ldt;
	sys_call_table[__NR_pivot_root] = (void *)hook_pivot_root;
	sys_call_table[__NR__sysctl] = (void *)hook__sysctl;
	sys_call_table[__NR_prctl] = (void *)hook_prctl;
	sys_call_table[__NR_arch_prctl] = (void *)hook_arch_prctl;
	sys_call_table[__NR_adjtimex] = (void *)hook_adjtimex;
	sys_call_table[__NR_setrlimit] = (void *)hook_setrlimit;
	sys_call_table[__NR_chroot] = (void *)hook_chroot;
	sys_call_table[__NR_sync] = (void *)hook_sync;
	sys_call_table[__NR_acct] = (void *)hook_acct;
	sys_call_table[__NR_settimeofday] = (void *)hook_settimeofday;
	sys_call_table[__NR_mount] = (void *)hook_mount;
	sys_call_table[__NR_umount2] = (void *)hook_umount2;
	sys_call_table[__NR_swapon] = (void *)hook_swapon;
	sys_call_table[__NR_swapoff] = (void *)hook_swapoff;
	sys_call_table[__NR_reboot] = (void *)hook_reboot;
	sys_call_table[__NR_sethostname] = (void *)hook_sethostname;
	sys_call_table[__NR_setdomainname] = (void *)hook_setdomainname;
	sys_call_table[__NR_iopl] = (void *)hook_iopl;
	sys_call_table[__NR_ioperm] = (void *)hook_ioperm;
	sys_call_table[__NR_create_module] = (void *)hook_create_module;
	sys_call_table[__NR_init_module] = (void *)hook_init_module;
	sys_call_table[__NR_delete_module] = (void *)hook_delete_module;
	sys_call_table[__NR_get_kernel_syms] = (void *)hook_get_kernel_syms;
	sys_call_table[__NR_query_module] = (void *)hook_query_module;
	sys_call_table[__NR_quotactl] = (void *)hook_quotactl;
	sys_call_table[__NR_nfsservctl] = (void *)hook_nfsservctl;
	sys_call_table[__NR_getpmsg] = (void *)hook_getpmsg;
	sys_call_table[__NR_putpmsg] = (void *)hook_putpmsg;
	sys_call_table[__NR_afs_syscall] = (void *)hook_afs_syscall;
	sys_call_table[__NR_tuxcall] = (void *)hook_tuxcall;
	sys_call_table[__NR_security] = (void *)hook_security;
	sys_call_table[__NR_gettid] = (void *)hook_gettid;
	sys_call_table[__NR_readahead] = (void *)hook_readahead;
	sys_call_table[__NR_setxattr] = (void *)hook_setxattr;
	sys_call_table[__NR_lsetxattr] = (void *)hook_lsetxattr;
	sys_call_table[__NR_fsetxattr] = (void *)hook_fsetxattr;
	sys_call_table[__NR_getxattr] = (void *)hook_getxattr;
	sys_call_table[__NR_lgetxattr] = (void *)hook_lgetxattr;
	sys_call_table[__NR_fgetxattr] = (void *)hook_fgetxattr;
	sys_call_table[__NR_listxattr] = (void *)hook_listxattr;
	sys_call_table[__NR_llistxattr] = (void *)hook_llistxattr;
	sys_call_table[__NR_flistxattr] = (void *)hook_flistxattr;
	sys_call_table[__NR_removexattr] = (void *)hook_removexattr;
	sys_call_table[__NR_lremovexattr] = (void *)hook_lremovexattr;
	sys_call_table[__NR_fremovexattr] = (void *)hook_fremovexattr;
	sys_call_table[__NR_tkill] = (void *)hook_tkill;
	sys_call_table[__NR_time] = (void *)hook_time;
	sys_call_table[__NR_futex] = (void *)hook_futex;
	sys_call_table[__NR_sched_setaffinity] = (void *)hook_sched_setaffinity;
	sys_call_table[__NR_sched_getaffinity] = (void *)hook_sched_getaffinity;
	sys_call_table[__NR_set_thread_area] = (void *)hook_set_thread_area;
	sys_call_table[__NR_io_setup] = (void *)hook_io_setup;
	sys_call_table[__NR_io_destroy] = (void *)hook_io_destroy;
	sys_call_table[__NR_io_getevents] = (void *)hook_io_getevents;
	sys_call_table[__NR_io_submit] = (void *)hook_io_submit;
	sys_call_table[__NR_io_cancel] = (void *)hook_io_cancel;
	sys_call_table[__NR_get_thread_area] = (void *)hook_get_thread_area;
	sys_call_table[__NR_lookup_dcookie] = (void *)hook_lookup_dcookie;
	sys_call_table[__NR_epoll_create] = (void *)hook_epoll_create;
	sys_call_table[__NR_epoll_ctl_old] = (void *)hook_epoll_ctl_old;
	sys_call_table[__NR_epoll_wait_old] = (void *)hook_epoll_wait_old;
	sys_call_table[__NR_remap_file_pages] = (void *)hook_remap_file_pages;
	sys_call_table[__NR_getdents64] = (void *)hook_getdents64;
	sys_call_table[__NR_set_tid_address] = (void *)hook_set_tid_address;
	sys_call_table[__NR_restart_syscall] = (void *)hook_restart_syscall;
	sys_call_table[__NR_semtimedop] = (void *)hook_semtimedop;
	sys_call_table[__NR_fadvise64] = (void *)hook_fadvise64;
	sys_call_table[__NR_timer_create] = (void *)hook_timer_create;
	sys_call_table[__NR_timer_settime] = (void *)hook_timer_settime;
	sys_call_table[__NR_timer_gettime] = (void *)hook_timer_gettime;
	sys_call_table[__NR_timer_getoverrun] = (void *)hook_timer_getoverrun;
	sys_call_table[__NR_timer_delete] = (void *)hook_timer_delete;
	sys_call_table[__NR_clock_settime] = (void *)hook_clock_settime;
	sys_call_table[__NR_clock_gettime] = (void *)hook_clock_gettime;
	sys_call_table[__NR_clock_getres] = (void *)hook_clock_getres;
	sys_call_table[__NR_clock_nanosleep] = (void *)hook_clock_nanosleep;
	sys_call_table[__NR_exit_group] = (void *)hook_exit_group;
	sys_call_table[__NR_epoll_wait] = (void *)hook_epoll_wait;
	sys_call_table[__NR_epoll_ctl] = (void *)hook_epoll_ctl;
	sys_call_table[__NR_tgkill] = (void *)hook_tgkill;
	sys_call_table[__NR_utimes] = (void *)hook_utimes;
	sys_call_table[__NR_vserver] = (void *)hook_vserver;
	sys_call_table[__NR_mbind] = (void *)hook_mbind;
	sys_call_table[__NR_set_mempolicy] = (void *)hook_set_mempolicy;
	sys_call_table[__NR_get_mempolicy] = (void *)hook_get_mempolicy;
	sys_call_table[__NR_mq_open] = (void *)hook_mq_open;
	sys_call_table[__NR_mq_unlink] = (void *)hook_mq_unlink;
	sys_call_table[__NR_mq_timedsend] = (void *)hook_mq_timedsend;
	sys_call_table[__NR_mq_timedreceive] = (void *)hook_mq_timedreceive;
	sys_call_table[__NR_mq_notify] = (void *)hook_mq_notify;
	sys_call_table[__NR_mq_getsetattr] = (void *)hook_mq_getsetattr;
	sys_call_table[__NR_kexec_load] = (void *)hook_kexec_load;
	sys_call_table[__NR_waitid] = (void *)hook_waitid;
	sys_call_table[__NR_add_key] = (void *)hook_add_key;
	sys_call_table[__NR_request_key] = (void *)hook_request_key;
	sys_call_table[__NR_keyctl] = (void *)hook_keyctl;
	sys_call_table[__NR_ioprio_set] = (void *)hook_ioprio_set;
	sys_call_table[__NR_ioprio_get] = (void *)hook_ioprio_get;
	sys_call_table[__NR_inotify_init] = (void *)hook_inotify_init;
	sys_call_table[__NR_inotify_add_watch] = (void *)hook_inotify_add_watch;
	sys_call_table[__NR_inotify_rm_watch] = (void *)hook_inotify_rm_watch;
	sys_call_table[__NR_migrate_pages] = (void *)hook_migrate_pages;
	sys_call_table[__NR_openat] = (void *)hook_openat;
	sys_call_table[__NR_mkdirat] = (void *)hook_mkdirat;
	sys_call_table[__NR_mknodat] = (void *)hook_mknodat;
	sys_call_table[__NR_fchownat] = (void *)hook_fchownat;
	sys_call_table[__NR_futimesat] = (void *)hook_futimesat;
	sys_call_table[__NR_newfstatat] = (void *)hook_newfstatat;
	sys_call_table[__NR_unlinkat] = (void *)hook_unlinkat;
	sys_call_table[__NR_renameat] = (void *)hook_renameat;
	sys_call_table[__NR_linkat] = (void *)hook_linkat;
	sys_call_table[__NR_symlinkat] = (void *)hook_symlinkat;
	sys_call_table[__NR_readlinkat] = (void *)hook_readlinkat;
	sys_call_table[__NR_fchmodat] = (void *)hook_fchmodat;
	sys_call_table[__NR_faccessat] = (void *)hook_faccessat;
	sys_call_table[__NR_pselect6] = (void *)hook_pselect6;
	sys_call_table[__NR_ppoll] = (void *)hook_ppoll;
	sys_call_table[__NR_unshare] = (void *)hook_unshare;
	sys_call_table[__NR_set_robust_list] = (void *)hook_set_robust_list;
	sys_call_table[__NR_get_robust_list] = (void *)hook_get_robust_list;
	sys_call_table[__NR_splice] = (void *)hook_splice;
	sys_call_table[__NR_tee] = (void *)hook_tee;
	sys_call_table[__NR_sync_file_range] = (void *)hook_sync_file_range;
	sys_call_table[__NR_vmsplice] = (void *)hook_vmsplice;
	sys_call_table[__NR_move_pages] = (void *)hook_move_pages;
	sys_call_table[__NR_utimensat] = (void *)hook_utimensat;
	sys_call_table[__NR_epoll_pwait] = (void *)hook_epoll_pwait;
	sys_call_table[__NR_signalfd] = (void *)hook_signalfd;
	sys_call_table[__NR_timerfd_create] = (void *)hook_timerfd_create;
	sys_call_table[__NR_eventfd] = (void *)hook_eventfd;
	sys_call_table[__NR_fallocate] = (void *)hook_fallocate;
	sys_call_table[__NR_timerfd_settime] = (void *)hook_timerfd_settime;
	sys_call_table[__NR_timerfd_gettime] = (void *)hook_timerfd_gettime;
	sys_call_table[__NR_accept4] = (void *)hook_accept4;
	sys_call_table[__NR_signalfd4] = (void *)hook_signalfd4;
	sys_call_table[__NR_eventfd2] = (void *)hook_eventfd2;
	sys_call_table[__NR_epoll_create1] = (void *)hook_epoll_create1;
	sys_call_table[__NR_dup3] = (void *)hook_dup3;
	sys_call_table[__NR_pipe2] = (void *)hook_pipe2;
	sys_call_table[__NR_inotify_init1] = (void *)hook_inotify_init1;
	sys_call_table[__NR_preadv] = (void *)hook_preadv;
	sys_call_table[__NR_pwritev] = (void *)hook_pwritev;
	sys_call_table[__NR_rt_tgsigqueueinfo] = (void *)hook_rt_tgsigqueueinfo;
	sys_call_table[__NR_perf_event_open] = (void *)hook_perf_event_open;
	sys_call_table[__NR_recvmmsg] = (void *)hook_recvmmsg;
	sys_call_table[__NR_fanotify_init] = (void *)hook_fanotify_init;
	sys_call_table[__NR_fanotify_mark] = (void *)hook_fanotify_mark;
	sys_call_table[__NR_prlimit64] = (void *)hook_prlimit64;
	sys_call_table[__NR_name_to_handle_at] = (void *)hook_name_to_handle_at;
	sys_call_table[__NR_open_by_handle_at] = (void *)hook_open_by_handle_at;
	sys_call_table[__NR_clock_adjtime] = (void *)hook_clock_adjtime;
	sys_call_table[__NR_syncfs] = (void *)hook_syncfs;
	sys_call_table[__NR_sendmmsg] = (void *)hook_sendmmsg;
	sys_call_table[__NR_set_ns] = (void *)hook_set_ns;
	sys_call_table[__NR_get_cpu] = (void *)hook_get_cpu;
	sys_call_table[__NR_process_vm_readv] = (void *)hook_process_vm_readv;
	sys_call_table[__NR_process_vm_writev] = (void *)hook_process_vm_writev;
}

void unreg_hooks(unsigned long **sys_call_table)
{
	sys_call_table[__NR_read] = (void *)sys_read;
	sys_call_table[__NR_write] = (void *)sys_write;
	sys_call_table[__NR_open] = (void *)sys_open;
	sys_call_table[__NR_close] = (void *)sys_close;
	sys_call_table[__NR_stat] = (void *)sys_stat;
	sys_call_table[__NR_fstat] = (void *)sys_fstat;
	sys_call_table[__NR_lstat] = (void *)sys_lstat;
	sys_call_table[__NR_poll] = (void *)sys_poll;
	sys_call_table[__NR_lseek] = (void *)sys_lseek;
	sys_call_table[__NR_mmap] = (void *)sys_mmap;
	sys_call_table[__NR_mprotect] = (void *)sys_mprotect;
	sys_call_table[__NR_munmap] = (void *)sys_munmap;
	sys_call_table[__NR_brk] = (void *)sys_brk;
	sys_call_table[__NR_rt_sigaction] = (void *)sys_rt_sigaction;
	sys_call_table[__NR_rt_sigprocmask] = (void *)sys_rt_sigprocmask;
	sys_call_table[__NR_rt_sigreturn] = (void *)sys_rt_sigreturn;
	sys_call_table[__NR_ioctl] = (void *)sys_ioctl;
	sys_call_table[__NR_pread64] = (void *)sys_pread64;
	sys_call_table[__NR_pwrite64] = (void *)sys_pwrite64;
	sys_call_table[__NR_readv] = (void *)sys_readv;
	sys_call_table[__NR_writev] = (void *)sys_writev;
	sys_call_table[__NR_access] = (void *)sys_access;
	sys_call_table[__NR_pipe] = (void *)sys_pipe;
	sys_call_table[__NR_select] = (void *)sys_select;
	sys_call_table[__NR_sched_yield] = (void *)sys_sched_yield;
	sys_call_table[__NR_mremap] = (void *)sys_mremap;
	sys_call_table[__NR_msync] = (void *)sys_msync;
	sys_call_table[__NR_mincore] = (void *)sys_mincore;
	sys_call_table[__NR_madvise] = (void *)sys_madvise;
	sys_call_table[__NR_shmget] = (void *)sys_shmget;
	sys_call_table[__NR_shmat] = (void *)sys_shmat;
	sys_call_table[__NR_shmctl] = (void *)sys_shmctl;
	sys_call_table[__NR_dup] = (void *)sys_dup;
	sys_call_table[__NR_dup2] = (void *)sys_dup2;
	sys_call_table[__NR_pause] = (void *)sys_pause;
	sys_call_table[__NR_nanosleep] = (void *)sys_nanosleep;
	sys_call_table[__NR_getitimer] = (void *)sys_getitimer;
	sys_call_table[__NR_alarm] = (void *)sys_alarm;
	sys_call_table[__NR_setitimer] = (void *)sys_setitimer;
	sys_call_table[__NR_getpid] = (void *)sys_getpid;
	sys_call_table[__NR_sendfile] = (void *)sys_sendfile;
	sys_call_table[__NR_socket] = (void *)sys_socket;
	sys_call_table[__NR_connect] = (void *)sys_connect;
	sys_call_table[__NR_accept] = (void *)sys_accept;
	sys_call_table[__NR_sendto] = (void *)sys_sendto;
	sys_call_table[__NR_recvfrom] = (void *)sys_recvfrom;
	sys_call_table[__NR_sendmsg] = (void *)sys_sendmsg;
	sys_call_table[__NR_recvmsg] = (void *)sys_recvmsg;
	sys_call_table[__NR_shutdown] = (void *)sys_shutdown;
	sys_call_table[__NR_bind] = (void *)sys_bind;
	sys_call_table[__NR_listen] = (void *)sys_listen;
	sys_call_table[__NR_getsockname] = (void *)sys_getsockname;
	sys_call_table[__NR_getpeername] = (void *)sys_getpeername;
	sys_call_table[__NR_socketpair] = (void *)sys_socketpair;
	sys_call_table[__NR_setsockopt] = (void *)sys_setsockopt;
	sys_call_table[__NR_getsockopt] = (void *)sys_getsockopt;
	sys_call_table[__NR_clone] = (void *)sys_clone;
	sys_call_table[__NR_fork] = (void *)sys_fork;
	sys_call_table[__NR_vfork] = (void *)sys_vfork;
	sys_call_table[__NR_execve] = (void *)sys_execve;
	sys_call_table[__NR_exit] = (void *)sys_exit;
	sys_call_table[__NR_wait4] = (void *)sys_wait4;
	sys_call_table[__NR_kill] = (void *)sys_kill;
	sys_call_table[__NR_uname] = (void *)sys_uname;
	sys_call_table[__NR_semget] = (void *)sys_semget;
	sys_call_table[__NR_semop] = (void *)sys_semop;
	sys_call_table[__NR_semctl] = (void *)sys_semctl;
	sys_call_table[__NR_shmdt] = (void *)sys_shmdt;
	sys_call_table[__NR_msgget] = (void *)sys_msgget;
	sys_call_table[__NR_msgsnd] = (void *)sys_msgsnd;
	sys_call_table[__NR_msgrcv] = (void *)sys_msgrcv;
	sys_call_table[__NR_msgctl] = (void *)sys_msgctl;
	sys_call_table[__NR_fcntl] = (void *)sys_fcntl;
	sys_call_table[__NR_flock] = (void *)sys_flock;
	sys_call_table[__NR_fsync] = (void *)sys_fsync;
	sys_call_table[__NR_fdatasync] = (void *)sys_fdatasync;
	sys_call_table[__NR_truncate] = (void *)sys_truncate;
	sys_call_table[__NR_ftruncate] = (void *)sys_ftruncate;
	sys_call_table[__NR_getdents] = (void *)sys_getdents;
	sys_call_table[__NR_getcwd] = (void *)sys_getcwd;
	sys_call_table[__NR_chdir] = (void *)sys_chdir;
	sys_call_table[__NR_fchdir] = (void *)sys_fchdir;
	sys_call_table[__NR_rename] = (void *)sys_rename;
	sys_call_table[__NR_mkdir] = (void *)sys_mkdir;
	sys_call_table[__NR_rmdir] = (void *)sys_rmdir;
	sys_call_table[__NR_creat] = (void *)sys_creat;
	sys_call_table[__NR_link] = (void *)sys_link;
	sys_call_table[__NR_unlink] = (void *)sys_unlink;
	sys_call_table[__NR_symlink] = (void *)sys_symlink;
	sys_call_table[__NR_readlink] = (void *)sys_readlink;
	sys_call_table[__NR_chmod] = (void *)sys_chmod;
	sys_call_table[__NR_fchmod] = (void *)sys_fchmod;
	sys_call_table[__NR_chown] = (void *)sys_chown;
	sys_call_table[__NR_fchown] = (void *)sys_fchown;
	sys_call_table[__NR_lchown] = (void *)sys_lchown;
	sys_call_table[__NR_umask] = (void *)sys_umask;
	sys_call_table[__NR_gettimeofday] = (void *)sys_gettimeofday;
	sys_call_table[__NR_getrlimit] = (void *)sys_getrlimit;
	sys_call_table[__NR_getrusage] = (void *)sys_getrusage;
	sys_call_table[__NR_sysinfo] = (void *)sys_sysinfo;
	sys_call_table[__NR_times] = (void *)sys_times;
	sys_call_table[__NR_ptrace] = (void *)sys_ptrace;
	sys_call_table[__NR_getuid] = (void *)sys_getuid;
	sys_call_table[__NR_syslog] = (void *)sys_syslog;
	sys_call_table[__NR_getgid] = (void *)sys_getgid;
	sys_call_table[__NR_setuid] = (void *)sys_setuid;
	sys_call_table[__NR_setgid] = (void *)sys_setgid;
	sys_call_table[__NR_geteuid] = (void *)sys_geteuid;
	sys_call_table[__NR_getegid] = (void *)sys_getegid;
	sys_call_table[__NR_setpgid] = (void *)sys_setpgid;
	sys_call_table[__NR_getppid] = (void *)sys_getppid;
	sys_call_table[__NR_getpgrp] = (void *)sys_getpgrp;
	sys_call_table[__NR_setsid] = (void *)sys_setsid;
	sys_call_table[__NR_setreuid] = (void *)sys_setreuid;
	sys_call_table[__NR_setregid] = (void *)sys_setregid;
	sys_call_table[__NR_getgroups] = (void *)sys_getgroups;
	sys_call_table[__NR_setgroups] = (void *)sys_setgroups;
	sys_call_table[__NR_setresuid] = (void *)sys_setresuid;
	sys_call_table[__NR_getresuid] = (void *)sys_getresuid;
	sys_call_table[__NR_setresgid] = (void *)sys_setresgid;
	sys_call_table[__NR_getresgid] = (void *)sys_getresgid;
	sys_call_table[__NR_getpgid] = (void *)sys_getpgid;
	sys_call_table[__NR_setfsuid] = (void *)sys_setfsuid;
	sys_call_table[__NR_setfsgid] = (void *)sys_setfsgid;
	sys_call_table[__NR_getsid] = (void *)sys_getsid;
	sys_call_table[__NR_capget] = (void *)sys_capget;
	sys_call_table[__NR_capset] = (void *)sys_capset;
	sys_call_table[__NR_rt_sigpending] = (void *)sys_rt_sigpending;
	sys_call_table[__NR_rt_sigtimedwait] = (void *)sys_rt_sigtimedwait;
	sys_call_table[__NR_rt_sigqueueinfo] = (void *)sys_rt_sigqueueinfo;
	sys_call_table[__NR_rt_sigsuspend] = (void *)sys_rt_sigsuspend;
	sys_call_table[__NR_sigaltstack] = (void *)sys_sigaltstack;
	sys_call_table[__NR_utime] = (void *)sys_utime;
	sys_call_table[__NR_mknod] = (void *)sys_mknod;
	sys_call_table[__NR_uselib] = (void *)sys_uselib;
	sys_call_table[__NR_personality] = (void *)sys_personality;
	sys_call_table[__NR_ustat] = (void *)sys_ustat;
	sys_call_table[__NR_statfs] = (void *)sys_statfs;
	sys_call_table[__NR_fstatfs] = (void *)sys_fstatfs;
	sys_call_table[__NR_sysfs] = (void *)sys_sysfs;
	sys_call_table[__NR_getpriority] = (void *)sys_getpriority;
	sys_call_table[__NR_setpriority] = (void *)sys_setpriority;
	sys_call_table[__NR_sched_setparam] = (void *)sys_sched_setparam;
	sys_call_table[__NR_sched_getparam] = (void *)sys_sched_getparam;
	sys_call_table[__NR_sched_setscheduler] = (void *)sys_sched_setscheduler;
	sys_call_table[__NR_sched_getscheduler] = (void *)sys_sched_getscheduler;
	sys_call_table[__NR_sched_get_priority_max] = (void *)sys_sched_get_priority_max;
	sys_call_table[__NR_sched_get_priority_min] = (void *)sys_sched_get_priority_min;
	sys_call_table[__NR_sched_rr_get_interval] = (void *)sys_sched_rr_get_interval;
	sys_call_table[__NR_mlock] = (void *)sys_mlock;
	sys_call_table[__NR_munlock] = (void *)sys_munlock;
	sys_call_table[__NR_mlockall] = (void *)sys_mlockall;
	sys_call_table[__NR_munlockall] = (void *)sys_munlockall;
	sys_call_table[__NR_vhangup] = (void *)sys_vhangup;
	sys_call_table[__NR_modify_ldt] = (void *)sys_modify_ldt;
	sys_call_table[__NR_pivot_root] = (void *)sys_pivot_root;
	sys_call_table[__NR__sysctl] = (void *)sys__sysctl;
	sys_call_table[__NR_prctl] = (void *)sys_prctl;
	sys_call_table[__NR_arch_prctl] = (void *)sys_arch_prctl;
	sys_call_table[__NR_adjtimex] = (void *)sys_adjtimex;
	sys_call_table[__NR_setrlimit] = (void *)sys_setrlimit;
	sys_call_table[__NR_chroot] = (void *)sys_chroot;
	sys_call_table[__NR_sync] = (void *)sys_sync;
	sys_call_table[__NR_acct] = (void *)sys_acct;
	sys_call_table[__NR_settimeofday] = (void *)sys_settimeofday;
	sys_call_table[__NR_mount] = (void *)sys_mount;
	sys_call_table[__NR_umount2] = (void *)sys_umount2;
	sys_call_table[__NR_swapon] = (void *)sys_swapon;
	sys_call_table[__NR_swapoff] = (void *)sys_swapoff;
	sys_call_table[__NR_reboot] = (void *)sys_reboot;
	sys_call_table[__NR_sethostname] = (void *)sys_sethostname;
	sys_call_table[__NR_setdomainname] = (void *)sys_setdomainname;
	sys_call_table[__NR_iopl] = (void *)sys_iopl;
	sys_call_table[__NR_ioperm] = (void *)sys_ioperm;
	sys_call_table[__NR_create_module] = (void *)sys_create_module;
	sys_call_table[__NR_init_module] = (void *)sys_init_module;
	sys_call_table[__NR_delete_module] = (void *)sys_delete_module;
	sys_call_table[__NR_get_kernel_syms] = (void *)sys_get_kernel_syms;
	sys_call_table[__NR_query_module] = (void *)sys_query_module;
	sys_call_table[__NR_quotactl] = (void *)sys_quotactl;
	sys_call_table[__NR_nfsservctl] = (void *)sys_nfsservctl;
	sys_call_table[__NR_getpmsg] = (void *)sys_getpmsg;
	sys_call_table[__NR_putpmsg] = (void *)sys_putpmsg;
	sys_call_table[__NR_afs_syscall] = (void *)sys_afs_syscall;
	sys_call_table[__NR_tuxcall] = (void *)sys_tuxcall;
	sys_call_table[__NR_security] = (void *)sys_security;
	sys_call_table[__NR_gettid] = (void *)sys_gettid;
	sys_call_table[__NR_readahead] = (void *)sys_readahead;
	sys_call_table[__NR_setxattr] = (void *)sys_setxattr;
	sys_call_table[__NR_lsetxattr] = (void *)sys_lsetxattr;
	sys_call_table[__NR_fsetxattr] = (void *)sys_fsetxattr;
	sys_call_table[__NR_getxattr] = (void *)sys_getxattr;
	sys_call_table[__NR_lgetxattr] = (void *)sys_lgetxattr;
	sys_call_table[__NR_fgetxattr] = (void *)sys_fgetxattr;
	sys_call_table[__NR_listxattr] = (void *)sys_listxattr;
	sys_call_table[__NR_llistxattr] = (void *)sys_llistxattr;
	sys_call_table[__NR_flistxattr] = (void *)sys_flistxattr;
	sys_call_table[__NR_removexattr] = (void *)sys_removexattr;
	sys_call_table[__NR_lremovexattr] = (void *)sys_lremovexattr;
	sys_call_table[__NR_fremovexattr] = (void *)sys_fremovexattr;
	sys_call_table[__NR_tkill] = (void *)sys_tkill;
	sys_call_table[__NR_time] = (void *)sys_time;
	sys_call_table[__NR_futex] = (void *)sys_futex;
	sys_call_table[__NR_sched_setaffinity] = (void *)sys_sched_setaffinity;
	sys_call_table[__NR_sched_getaffinity] = (void *)sys_sched_getaffinity;
	sys_call_table[__NR_set_thread_area] = (void *)sys_set_thread_area;
	sys_call_table[__NR_io_setup] = (void *)sys_io_setup;
	sys_call_table[__NR_io_destroy] = (void *)sys_io_destroy;
	sys_call_table[__NR_io_getevents] = (void *)sys_io_getevents;
	sys_call_table[__NR_io_submit] = (void *)sys_io_submit;
	sys_call_table[__NR_io_cancel] = (void *)sys_io_cancel;
	sys_call_table[__NR_get_thread_area] = (void *)sys_get_thread_area;
	sys_call_table[__NR_lookup_dcookie] = (void *)sys_lookup_dcookie;
	sys_call_table[__NR_epoll_create] = (void *)sys_epoll_create;
	sys_call_table[__NR_epoll_ctl_old] = (void *)sys_epoll_ctl_old;
	sys_call_table[__NR_epoll_wait_old] = (void *)sys_epoll_wait_old;
	sys_call_table[__NR_remap_file_pages] = (void *)sys_remap_file_pages;
	sys_call_table[__NR_getdents64] = (void *)sys_getdents64;
	sys_call_table[__NR_set_tid_address] = (void *)sys_set_tid_address;
	sys_call_table[__NR_restart_syscall] = (void *)sys_restart_syscall;
	sys_call_table[__NR_semtimedop] = (void *)sys_semtimedop;
	sys_call_table[__NR_fadvise64] = (void *)sys_fadvise64;
	sys_call_table[__NR_timer_create] = (void *)sys_timer_create;
	sys_call_table[__NR_timer_settime] = (void *)sys_timer_settime;
	sys_call_table[__NR_timer_gettime] = (void *)sys_timer_gettime;
	sys_call_table[__NR_timer_getoverrun] = (void *)sys_timer_getoverrun;
	sys_call_table[__NR_timer_delete] = (void *)sys_timer_delete;
	sys_call_table[__NR_clock_settime] = (void *)sys_clock_settime;
	sys_call_table[__NR_clock_gettime] = (void *)sys_clock_gettime;
	sys_call_table[__NR_clock_getres] = (void *)sys_clock_getres;
	sys_call_table[__NR_clock_nanosleep] = (void *)sys_clock_nanosleep;
	sys_call_table[__NR_exit_group] = (void *)sys_exit_group;
	sys_call_table[__NR_epoll_wait] = (void *)sys_epoll_wait;
	sys_call_table[__NR_epoll_ctl] = (void *)sys_epoll_ctl;
	sys_call_table[__NR_tgkill] = (void *)sys_tgkill;
	sys_call_table[__NR_utimes] = (void *)sys_utimes;
	sys_call_table[__NR_vserver] = (void *)sys_vserver;
	sys_call_table[__NR_mbind] = (void *)sys_mbind;
	sys_call_table[__NR_set_mempolicy] = (void *)sys_set_mempolicy;
	sys_call_table[__NR_get_mempolicy] = (void *)sys_get_mempolicy;
	sys_call_table[__NR_mq_open] = (void *)sys_mq_open;
	sys_call_table[__NR_mq_unlink] = (void *)sys_mq_unlink;
	sys_call_table[__NR_mq_timedsend] = (void *)sys_mq_timedsend;
	sys_call_table[__NR_mq_timedreceive] = (void *)sys_mq_timedreceive;
	sys_call_table[__NR_mq_notify] = (void *)sys_mq_notify;
	sys_call_table[__NR_mq_getsetattr] = (void *)sys_mq_getsetattr;
	sys_call_table[__NR_kexec_load] = (void *)sys_kexec_load;
	sys_call_table[__NR_waitid] = (void *)sys_waitid;
	sys_call_table[__NR_add_key] = (void *)sys_add_key;
	sys_call_table[__NR_request_key] = (void *)sys_request_key;
	sys_call_table[__NR_keyctl] = (void *)sys_keyctl;
	sys_call_table[__NR_ioprio_set] = (void *)sys_ioprio_set;
	sys_call_table[__NR_ioprio_get] = (void *)sys_ioprio_get;
	sys_call_table[__NR_inotify_init] = (void *)sys_inotify_init;
	sys_call_table[__NR_inotify_add_watch] = (void *)sys_inotify_add_watch;
	sys_call_table[__NR_inotify_rm_watch] = (void *)sys_inotify_rm_watch;
	sys_call_table[__NR_migrate_pages] = (void *)sys_migrate_pages;
	sys_call_table[__NR_openat] = (void *)sys_openat;
	sys_call_table[__NR_mkdirat] = (void *)sys_mkdirat;
	sys_call_table[__NR_mknodat] = (void *)sys_mknodat;
	sys_call_table[__NR_fchownat] = (void *)sys_fchownat;
	sys_call_table[__NR_futimesat] = (void *)sys_futimesat;
	sys_call_table[__NR_newfstatat] = (void *)sys_newfstatat;
	sys_call_table[__NR_unlinkat] = (void *)sys_unlinkat;
	sys_call_table[__NR_renameat] = (void *)sys_renameat;
	sys_call_table[__NR_linkat] = (void *)sys_linkat;
	sys_call_table[__NR_symlinkat] = (void *)sys_symlinkat;
	sys_call_table[__NR_readlinkat] = (void *)sys_readlinkat;
	sys_call_table[__NR_fchmodat] = (void *)sys_fchmodat;
	sys_call_table[__NR_faccessat] = (void *)sys_faccessat;
	sys_call_table[__NR_pselect6] = (void *)sys_pselect6;
	sys_call_table[__NR_ppoll] = (void *)sys_ppoll;
	sys_call_table[__NR_unshare] = (void *)sys_unshare;
	sys_call_table[__NR_set_robust_list] = (void *)sys_set_robust_list;
	sys_call_table[__NR_get_robust_list] = (void *)sys_get_robust_list;
	sys_call_table[__NR_splice] = (void *)sys_splice;
	sys_call_table[__NR_tee] = (void *)sys_tee;
	sys_call_table[__NR_sync_file_range] = (void *)sys_sync_file_range;
	sys_call_table[__NR_vmsplice] = (void *)sys_vmsplice;
	sys_call_table[__NR_move_pages] = (void *)sys_move_pages;
	sys_call_table[__NR_utimensat] = (void *)sys_utimensat;
	sys_call_table[__NR_epoll_pwait] = (void *)sys_epoll_pwait;
	sys_call_table[__NR_signalfd] = (void *)sys_signalfd;
	sys_call_table[__NR_timerfd_create] = (void *)sys_timerfd_create;
	sys_call_table[__NR_eventfd] = (void *)sys_eventfd;
	sys_call_table[__NR_fallocate] = (void *)sys_fallocate;
	sys_call_table[__NR_timerfd_settime] = (void *)sys_timerfd_settime;
	sys_call_table[__NR_timerfd_gettime] = (void *)sys_timerfd_gettime;
	sys_call_table[__NR_accept4] = (void *)sys_accept4;
	sys_call_table[__NR_signalfd4] = (void *)sys_signalfd4;
	sys_call_table[__NR_eventfd2] = (void *)sys_eventfd2;
	sys_call_table[__NR_epoll_create1] = (void *)sys_epoll_create1;
	sys_call_table[__NR_dup3] = (void *)sys_dup3;
	sys_call_table[__NR_pipe2] = (void *)sys_pipe2;
	sys_call_table[__NR_inotify_init1] = (void *)sys_inotify_init1;
	sys_call_table[__NR_preadv] = (void *)sys_preadv;
	sys_call_table[__NR_pwritev] = (void *)sys_pwritev;
	sys_call_table[__NR_rt_tgsigqueueinfo] = (void *)sys_rt_tgsigqueueinfo;
	sys_call_table[__NR_perf_event_open] = (void *)sys_perf_event_open;
	sys_call_table[__NR_recvmmsg] = (void *)sys_recvmmsg;
	sys_call_table[__NR_fanotify_init] = (void *)sys_fanotify_init;
	sys_call_table[__NR_fanotify_mark] = (void *)sys_fanotify_mark;
	sys_call_table[__NR_prlimit64] = (void *)sys_prlimit64;
	sys_call_table[__NR_name_to_handle_at] = (void *)sys_name_to_handle_at;
	sys_call_table[__NR_open_by_handle_at] = (void *)sys_open_by_handle_at;
	sys_call_table[__NR_clock_adjtime] = (void *)sys_clock_adjtime;
	sys_call_table[__NR_syncfs] = (void *)sys_syncfs;
	sys_call_table[__NR_sendmmsg] = (void *)sys_sendmmsg;
	sys_call_table[__NR_set_ns] = (void *)sys_set_ns;
	sys_call_table[__NR_get_cpu] = (void *)sys_get_cpu;
	sys_call_table[__NR_process_vm_readv] = (void *)sys_process_vm_readv;
	sys_call_table[__NR_process_vm_writev] = (void *)sys_process_vm_writev;
}

