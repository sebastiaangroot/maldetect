#include <linux/syscalls.h>

long hook_sys_time(time_t __user *tloc)
{
	long retval = sys_time(tloc);
	//Logger here
	return retval;
}

long hook_sys_stime(time_t __user *tptr)
{
	long retval = sys_stime(tptr);
	//Logger here
	return retval;
}

long hook_sys_gettimeofday(struct timeval __user *tv, struct timezone __user *tz)
{
	long retval = sys_gettimeofday(tv, tz);
	//Logger here
	return retval;
}

long hook_sys_settimeofday(struct timeval __user *tv, struct timezone __user *tz)
{
	long retval = sys_settimeofday(tv, tz);
	//Logger here
	return retval;
}

long hook_sys_adjtimex(struct timex __user *txc_p)
{
	long retval = sys_adjtimex(txc_p);
	//Logger here
	return retval;
}

long hook_sys_times(struct tms __user *tbuf)
{
	long retval = sys_times(tbuf);
	//Logger here
	return retval;
}

long hook_sys_gettid(void)
{
	long retval = sys_gettid();
	//Logger here
	return retval;
}

long hook_sys_nanosleep(struct timespec __user *rqtp, struct timespec __user *rmtp)
{
	long retval = sys_nanosleep(rqtp, rmtp);
	//Logger here
	return retval;
}

long hook_sys_alarm(unsigned int seconds)
{
	long retval = sys_alarm(seconds);
	//Logger here
	return retval;
}

long hook_sys_getpid(void)
{
	long retval = sys_getpid();
	//Logger here
	return retval;
}

long hook_sys_getppid(void)
{
	long retval = sys_getppid();
	//Logger here
	return retval;
}

long hook_sys_getuid(void)
{
	long retval = sys_getuid();
	//Logger here
	return retval;
}

long hook_sys_geteuid(void)
{
	long retval = sys_geteuid();
	//Logger here
	return retval;
}

long hook_sys_getgid(void)
{
	long retval = sys_getgid();
	//Logger here
	return retval;
}

long hook_sys_getegid(void)
{
	long retval = sys_getegid();
	//Logger here
	return retval;
}

long hook_sys_getresuid(uid_t __user *ruid, uid_t __user *euid, uid_t __user *suid)
{
	long retval = sys_getresuid(ruid, euid, suid);
	//Logger here
	return retval;
}

long hook_sys_getresgid(gid_t __user *rgid, gid_t __user *egid, gid_t __user *sgid)
{
	long retval = sys_getresgid(rgid, egid, sgid);
	//Logger here
	return retval;
}

long hook_sys_getpgid(pid_t pid)
{
	long retval = sys_getpgid(pid);
	//Logger here
	return retval;
}

long hook_sys_getpgrp(void)
{
	long retval = sys_getpgrp();
	//Logger here
	return retval;
}

long hook_sys_getsid(pid_t pid)
{
	long retval = sys_getsid(pid);
	//Logger here
	return retval;
}

long hook_sys_getgroups(int gidsetsize, gid_t __user *grouplist)
{
	long retval = sys_getgroups(gidsetsize, grouplist);
	//Logger here
	return retval;
}

long hook_sys_setregid(gid_t rgid, gid_t egid)
{
	long retval = sys_setregid(rgid, egid);
	//Logger here
	return retval;
}

long hook_sys_setgid(gid_t gid)
{
	long retval = sys_setgid(gid);
	//Logger here
	return retval;
}

long hook_sys_setreuid(uid_t ruid, uid_t euid)
{
	long retval = sys_setreuid(ruid, euid);
	//Logger here
	return retval;
}

long hook_sys_setuid(uid_t uid)
{
	long retval = sys_setuid(uid);
	//Logger here
	return retval;
}

long hook_sys_setresuid(uid_t ruid, uid_t euid, uid_t suid)
{
	long retval = sys_setresuid(ruid, euid, suid);
	//Logger here
	return retval;
}

long hook_sys_setresgid(gid_t rgid, gid_t egid, gid_t sgid)
{
	long retval = sys_setresgid(rgid, egid, sgid);
	//Logger here
	return retval;
}

long hook_sys_setfsuid(uid_t uid)
{
	long retval = sys_setfsuid(uid);
	//Logger here
	return retval;
}

long hook_sys_setfsgid(gid_t gid)
{
	long retval = sys_setfsgid(gid);
	//Logger here
	return retval;
}

long hook_sys_setpgid(pid_t pid, pid_t pgid)
{
	long retval = sys_setpgid(pid, pgid);
	//Logger here
	return retval;
}

long hook_sys_setsid(void)
{
	long retval = sys_setsid();
	//Logger here
	return retval;
}

long hook_sys_setgroups(int gidsetsize, gid_t __user *grouplist)
{
	long retval = sys_setgroups(gidsetsize, grouplist);
	//Logger here
	return retval;
}

long hook_sys_acct(const char __user *name)
{
	long retval = sys_acct(name);
	//Logger here
	return retval;
}

long hook_sys_capget(cap_user_header_t header, cap_user_data_t dataptr)
{
	long retval = sys_capget(header, dataptr);
	//Logger here
	return retval;
}

long hook_sys_capset(cap_user_header_t header, const cap_user_data_t data)
{
	long retval = sys_capset(header, data);
	//Logger here
	return retval;
}

long hook_sys_personality(u_long personality)
{
	long retval = sys_personality(personality);
	//Logger here
	return retval;
}

long hook_sys_sigpending(old_sigset_t __user *set)
{
	long retval = sys_sigpending(set);
	//Logger here
	return retval;
}

long hook_sys_sigprocmask(int how, old_sigset_t __user *set, old_sigset_t __user *oset)
{
	long retval = sys_sigprocmask(how, set, oset);
	//Logger here
	return retval;
}

long hook_sys_getitimer(int which, struct itimerval __user *value)
{
	long retval = sys_getitimer(which, value);
	//Logger here
	return retval;
}

long hook_sys_setitimer(int which, struct itimerval __user *value, struct itimerval __user *ovalue)
{
	long retval = sys_setitimer(which, value, ovalue);
	//Logger here
	return retval;
}

long hook_sys_timer_create(clockid_t which_clock, struct sigevent __user *timer_event_spec, timer_t __user * created_timer_id)
{
	long retval = sys_timer_create(which_clock, timer_event_spec, created_timer_id);
	//Logger here
	return retval;
}

long hook_sys_timer_gettime(timer_t timer_id, struct itimerspec __user *setting)
{
	long retval = sys_timer_gettime(timer_id, setting);
	//Logger here
	return retval;
}

long hook_sys_timer_getoverrun(timer_t timer_id)
{
	long retval = sys_timer_getoverrun(timer_id);
	//Logger here
	return retval;
}

long hook_sys_timer_settime(timer_t timer_id, int flags, const struct itimerspec __user *new_setting, struct itimerspec __user *old_setting)
{
	long retval = sys_timer_settime(timer_id, flags, new_setting, old_setting);
	//Logger here
	return retval;
}

long hook_sys_timer_delete(timer_t timer_id)
{
	long retval = sys_timer_delete(timer_id);
	//Logger here
	return retval;
}

long hook_sys_clock_settime(clockid_t which_clock, const struct timespec __user *tp)
{
	long retval = sys_clock_settime(which_clock, tp);
	//Logger here
	return retval;
}

long hook_sys_clock_gettime(clockid_t which_clock, struct timespec __user *tp)
{
	long retval = sys_clock_gettime(which_clock, tp);
	//Logger here
	return retval;
}

long hook_sys_clock_getres(clockid_t which_clock, struct timespec __user *tp)
{
	long retval = sys_clock_getres(which_clock, tp);
	//Logger here
	return retval;
}

long hook_sys_clock_nanosleep(clockid_t which_clock, int flags, const struct timespec __user *rqtp, struct timespec __user *rmtp)
{
	long retval = sys_clock_nanosleep(which_clock, flags, rqtp, rmtp);
	//Logger here
	return retval;
}

long hook_sys_nice(int increment)
{
	long retval = sys_nice(increment);
	//Logger here
	return retval;
}

long hook_sys_sched_setscheduler(pid_t pid, int policy, struct sched_param __user *param)
{
	long retval = sys_sched_setscheduler(pid, policy, param);
	//Logger here
	return retval;
}

long hook_sys_sched_setparam(pid_t pid, struct sched_param __user *param)
{
	long retval = sys_sched_setparam(pid, param);
	//Logger here
	return retval;
}

long hook_sys_sched_getscheduler(pid_t pid)
{
	long retval = sys_sched_getscheduler(pid);
	//Logger here
	return retval;
}

long hook_sys_sched_getparam(pid_t pid, struct sched_param __user *param)
{
	long retval = sys_sched_getparam(pid, param);
	//Logger here
	return retval;
}

long hook_sys_sched_setaffinity(pid_t pid, unsigned int len, unsigned long __user *user_mask_ptr)
{
	long retval = sys_sched_setaffinity(pid, len, user_mask_ptr);
	//Logger here
	return retval;
}

long hook_sys_sched_getaffinity(pid_t pid, unsigned int len, unsigned long __user *user_mask_ptr)
{
	long retval = sys_sched_getaffinity(pid, len, user_mask_ptr);
	//Logger here
	return retval;
}

long hook_sys_sched_yield(void)
{
	long retval = sys_sched_yield();
	//Logger here
	return retval;
}

long hook_sys_sched_get_priority_max(int policy)
{
	long retval = sys_sched_get_priority_max(policy);
	//Logger here
	return retval;
}

long hook_sys_sched_get_priority_min(int policy)
{
	long retval = sys_sched_get_priority_min(policy);
	//Logger here
	return retval;
}

long hook_sys_sched_rr_get_interval(pid_t pid, struct timespec __user *interval)
{
	long retval = sys_sched_rr_get_interval(pid, interval);
	//Logger here
	return retval;
}

long hook_sys_setpriority(int which, int who, int niceval)
{
	long retval = sys_setpriority(which, who, niceval);
	//Logger here
	return retval;
}

long hook_sys_getpriority(int which, int who)
{
	long retval = sys_getpriority(which, who);
	//Logger here
	return retval;
}

long hook_sys_shutdown(int arg0, int arg1)
{
	long retval = sys_shutdown(arg0, arg1);
	//Logger here
	return retval;
}

long hook_sys_reboot(int magic1, int magic2, unsigned int cmd, void __user *arg)
{
	long retval = sys_reboot(magic1, magic2, cmd, arg);
	//Logger here
	return retval;
}

long hook_sys_restart_syscall(void)
{
	long retval = sys_restart_syscall();
	//Logger here
	return retval;
}

long hook_sys_kexec_load(unsigned long entry, unsigned long nr_segments, struct kexec_segment __user *segments, unsigned long flags)
{
	long retval = sys_kexec_load(entry, nr_segments, segments, flags);
	//Logger here
	return retval;
}

long hook_sys_exit(int error_code)
{
	long retval = sys_exit(error_code);
	//Logger here
	return retval;
}

long hook_sys_exit_group(int error_code)
{
	long retval = sys_exit_group(error_code);
	//Logger here
	return retval;
}

long hook_sys_wait4(pid_t pid, int __user *stat_addr, int options, struct rusage __user *ru)
{
	long retval = sys_wait4(pid, stat_addr, options, ru);
	//Logger here
	return retval;
}

long hook_sys_waitid(int which, pid_t pid, struct siginfo __user *infop, int options, struct rusage __user *ru)
{
	long retval = sys_waitid(which, pid, infop, options, ru);
	//Logger here
	return retval;
}

long hook_sys_waitpid(pid_t pid, int __user *stat_addr, int options)
{
	long retval = sys_waitpid(pid, stat_addr, options);
	//Logger here
	return retval;
}

long hook_sys_set_tid_address(int __user *tidptr)
{
	long retval = sys_set_tid_address(tidptr);
	//Logger here
	return retval;
}

long hook_sys_futex(u32 __user *uaddr, int op, u32 val, struct timespec __user *utime, u32 __user *uaddr2, u32 val3)
{
	long retval = sys_futex(uaddr, op, val, utime, uaddr2, val3);
	//Logger here
	return retval;
}

long hook_sys_init_module(void __user *umod, unsigned long len, const char __user *uargs)
{
	long retval = sys_init_module(umod, len, uargs);
	//Logger here
	return retval;
}

long hook_sys_delete_module(const char __user *name_user, unsigned int flags)
{
	long retval = sys_delete_module(name_user, flags);
	//Logger here
	return retval;
}

long hook_sys_rt_sigprocmask(int how, sigset_t __user *set, sigset_t __user *oset, size_t sigsetsize)
{
	long retval = sys_rt_sigprocmask(how, set, oset, sigsetsize);
	//Logger here
	return retval;
}

long hook_sys_rt_sigpending(sigset_t __user *set, size_t sigsetsize)
{
	long retval = sys_rt_sigpending(set, sigsetsize);
	//Logger here
	return retval;
}

long hook_sys_rt_sigtimedwait(const sigset_t __user *uthese, siginfo_t __user *uinfo, const struct timespec __user *uts, size_t sigsetsize)
{
	long retval = sys_rt_sigtimedwait(uthese, uinfo, uts, sigsetsize);
	//Logger here
	return retval;
}

long hook_sys_rt_tgsigqueueinfo(pid_t tgid, pid_t  pid, int sig, siginfo_t __user *uinfo)
{
	long retval = sys_rt_tgsigqueueinfo(tgid, pid, sig, uinfo);
	//Logger here
	return retval;
}

long hook_sys_kill(int pid, int sig)
{
	long retval = sys_kill(pid, sig);
	//Logger here
	return retval;
}

long hook_sys_tgkill(int tgid, int pid, int sig)
{
	long retval = sys_tgkill(tgid, pid, sig);
	//Logger here
	return retval;
}

long hook_sys_tkill(int pid, int sig)
{
	long retval = sys_tkill(pid, sig);
	//Logger here
	return retval;
}

long hook_sys_rt_sigqueueinfo(int pid, int sig, siginfo_t __user *uinfo)
{
	long retval = sys_rt_sigqueueinfo(pid, sig, uinfo);
	//Logger here
	return retval;
}

long hook_sys_sgetmask(void)
{
	long retval = sys_sgetmask();
	//Logger here
	return retval;
}

long hook_sys_ssetmask(int newmask)
{
	long retval = sys_ssetmask(newmask);
	//Logger here
	return retval;
}

long hook_sys_signal(int sig, __sighandler_t handler)
{
	long retval = sys_signal(sig, handler);
	//Logger here
	return retval;
}

long hook_sys_pause(void)
{
	long retval = sys_pause();
	//Logger here
	return retval;
}

long hook_sys_sync(void)
{
	long retval = sys_sync();
	//Logger here
	return retval;
}

long hook_sys_fsync(unsigned int fd)
{
	long retval = sys_fsync(fd);
	//Logger here
	return retval;
}

long hook_sys_fdatasync(unsigned int fd)
{
	long retval = sys_fdatasync(fd);
	//Logger here
	return retval;
}

long hook_sys_bdflush(int func, long data)
{
	long retval = sys_bdflush(func, data);
	//Logger here
	return retval;
}

long hook_sys_mount(char __user *dev_name, char __user *dir_name, char __user *type, unsigned long flags, void __user *data)
{
	long retval = sys_mount(dev_name, dir_name, type, flags, data);
	//Logger here
	return retval;
}

long hook_sys_umount(char __user *name, int flags)
{
	long retval = sys_umount(name, flags);
	//Logger here
	return retval;
}

long hook_sys_oldumount(char __user *name)
{
	long retval = sys_oldumount(name);
	//Logger here
	return retval;
}

long hook_sys_truncate(const char __user *path, long length)
{
	long retval = sys_truncate(path, length);
	//Logger here
	return retval;
}

long hook_sys_ftruncate(unsigned int fd, unsigned long length)
{
	long retval = sys_ftruncate(fd, length);
	//Logger here
	return retval;
}

long hook_sys_stat(char __user *filename, struct __old_kernel_stat __user *statbuf)
{
	long retval = sys_stat(filename, statbuf);
	//Logger here
	return retval;
}

long hook_sys_statfs(const char __user * path, struct statfs __user *buf)
{
	long retval = sys_statfs(path, buf);
	//Logger here
	return retval;
}

long hook_sys_statfs64(const char __user *path, size_t sz, struct statfs64 __user *buf)
{
	long retval = sys_statfs64(path, sz, buf);
	//Logger here
	return retval;
}

long hook_sys_fstatfs(unsigned int fd, struct statfs __user *buf)
{
	long retval = sys_fstatfs(fd, buf);
	//Logger here
	return retval;
}

long hook_sys_fstatfs64(unsigned int fd, size_t sz, struct statfs64 __user *buf)
{
	long retval = sys_fstatfs64(fd, sz, buf);
	//Logger here
	return retval;
}

long hook_sys_lstat(char __user *filename, struct __old_kernel_stat __user *statbuf)
{
	long retval = sys_lstat(filename, statbuf);
	//Logger here
	return retval;
}

long hook_sys_fstat(unsigned int fd, struct __old_kernel_stat __user *statbuf)
{
	long retval = sys_fstat(fd, statbuf);
	//Logger here
	return retval;
}

long hook_sys_newstat(char __user *filename, struct stat __user *statbuf)
{
	long retval = sys_newstat(filename, statbuf);
	//Logger here
	return retval;
}

long hook_sys_newlstat(char __user *filename, struct stat __user *statbuf)
{
	long retval = sys_newlstat(filename, statbuf);
	//Logger here
	return retval;
}

long hook_sys_newfstat(unsigned int fd, struct stat __user *statbuf)
{
	long retval = sys_newfstat(fd, statbuf);
	//Logger here
	return retval;
}

long hook_sys_ustat(unsigned dev, struct ustat __user *ubuf)
{
	long retval = sys_ustat(dev, ubuf);
	//Logger here
	return retval;
}

long hook_sys_stat64(char __user *filename, struct stat64 __user *statbuf)
{
	long retval = sys_stat64(filename, statbuf);
	//Logger here
	return retval;
}

long hook_sys_fstat64(unsigned long fd, struct stat64 __user *statbuf)
{
	long retval = sys_fstat64(fd, statbuf);
	//Logger here
	return retval;
}

long hook_sys_lstat64(char __user *filename, struct stat64 __user *statbuf)
{
	long retval = sys_lstat64(filename, statbuf);
	//Logger here
	return retval;
}

long hook_sys_truncate64(const char __user *path, loff_t length)
{
	long retval = sys_truncate64(path, length);
	//Logger here
	return retval;
}

long hook_sys_ftruncate64(unsigned int fd, loff_t length)
{
	long retval = sys_ftruncate64(fd, length);
	//Logger here
	return retval;
}

long hook_sys_setxattr(const char __user *path, const char __user *name, const void __user *value, size_t size, int flags)
{
	long retval = sys_setxattr(path, name, value, size, flags);
	//Logger here
	return retval;
}

long hook_sys_lsetxattr(const char __user *path, const char __user *name, const void __user *value, size_t size, int flags)
{
	long retval = sys_lsetxattr(path, name, value, size, flags);
	//Logger here
	return retval;
}

long hook_sys_fsetxattr(int fd, const char __user *name, const void __user *value, size_t size, int flags)
{
	long retval = sys_fsetxattr(fd, name, value, size, flags);
	//Logger here
	return retval;
}

long hook_sys_getxattr(const char __user *path, const char __user *name, void __user *value, size_t size)
{
	long retval = sys_getxattr(path, name, value, size);
	//Logger here
	return retval;
}

long hook_sys_lgetxattr(const char __user *path, const char __user *name, void __user *value, size_t size)
{
	long retval = sys_lgetxattr(path, name, value, size);
	//Logger here
	return retval;
}

long hook_sys_fgetxattr(int fd, const char __user *name, void __user *value, size_t size)
{
	long retval = sys_fgetxattr(fd, name, value, size);
	//Logger here
	return retval;
}

long hook_sys_listxattr(const char __user *path, char __user *list, size_t size)
{
	long retval = sys_listxattr(path, list, size);
	//Logger here
	return retval;
}

long hook_sys_llistxattr(const char __user *path, char __user *list, size_t size)
{
	long retval = sys_llistxattr(path, list, size);
	//Logger here
	return retval;
}

long hook_sys_flistxattr(int fd, char __user *list, size_t size)
{
	long retval = sys_flistxattr(fd, list, size);
	//Logger here
	return retval;
}

long hook_sys_removexattr(const char __user *path, const char __user *name)
{
	long retval = sys_removexattr(path, name);
	//Logger here
	return retval;
}

long hook_sys_lremovexattr(const char __user *path, const char __user *name)
{
	long retval = sys_lremovexattr(path, name);
	//Logger here
	return retval;
}

long hook_sys_fremovexattr(int fd, const char __user *name)
{
	long retval = sys_fremovexattr(fd, name);
	//Logger here
	return retval;
}

long hook_sys_brk(unsigned long brk)
{
	long retval = sys_brk(brk);
	//Logger here
	return retval;
}

long hook_sys_mprotect(unsigned long start, size_t len, unsigned long prot)
{
	long retval = sys_mprotect(start, len, prot);
	//Logger here
	return retval;
}

long hook_sys_mremap(unsigned long addr, unsigned long old_len, unsigned long new_len, unsigned long flags, unsigned long new_addr)
{
	long retval = sys_mremap(addr, old_len, new_len, flags, new_addr);
	//Logger here
	return retval;
}

long hook_sys_remap_file_pages(unsigned long start, unsigned long size, unsigned long prot, unsigned long pgoff, unsigned long flags)
{
	long retval = sys_remap_file_pages(start, size, prot, pgoff, flags);
	//Logger here
	return retval;
}

long hook_sys_msync(unsigned long start, size_t len, int flags)
{
	long retval = sys_msync(start, len, flags);
	//Logger here
	return retval;
}

long hook_sys_fadvise64(int fd, loff_t offset, size_t len, int advice)
{
	long retval = sys_fadvise64(fd, offset, len, advice);
	//Logger here
	return retval;
}

long hook_sys_fadvise64_64(int fd, loff_t offset, loff_t len, int advice)
{
	long retval = sys_fadvise64_64(fd, offset, len, advice);
	//Logger here
	return retval;
}

long hook_sys_munmap(unsigned long addr, size_t len)
{
	long retval = sys_munmap(addr, len);
	//Logger here
	return retval;
}

long hook_sys_mlock(unsigned long start, size_t len)
{
	long retval = sys_mlock(start, len);
	//Logger here
	return retval;
}

long hook_sys_munlock(unsigned long start, size_t len)
{
	long retval = sys_munlock(start, len);
	//Logger here
	return retval;
}

long hook_sys_mlockall(int flags)
{
	long retval = sys_mlockall(flags);
	//Logger here
	return retval;
}

long hook_sys_munlockall(void)
{
	long retval = sys_munlockall();
	//Logger here
	return retval;
}

long hook_sys_madvise(unsigned long start, size_t len, int behavior)
{
	long retval = sys_madvise(start, len, behavior);
	//Logger here
	return retval;
}

long hook_sys_mincore(unsigned long start, size_t len, unsigned char __user * vec)
{
	long retval = sys_mincore(start, len, vec);
	//Logger here
	return retval;
}

long hook_sys_pivot_root(const char __user *new_root, const char __user *put_old)
{
	long retval = sys_pivot_root(new_root, put_old);
	//Logger here
	return retval;
}

long hook_sys_chroot(const char __user *filename)
{
	long retval = sys_chroot(filename);
	//Logger here
	return retval;
}

long hook_sys_mknod(const char __user *filename, int mode, unsigned dev)
{
	long retval = sys_mknod(filename, mode, dev);
	//Logger here
	return retval;
}

long hook_sys_link(const char __user *oldname, const char __user *newname)
{
	long retval = sys_link(oldname, newname);
	//Logger here
	return retval;
}

long hook_sys_symlink(const char __user *old, const char __user *new)
{
	long retval = sys_symlink(old, new);
	//Logger here
	return retval;
}

long hook_sys_unlink(const char __user *pathname)
{
	long retval = sys_unlink(pathname);
	//Logger here
	return retval;
}

long hook_sys_rename(const char __user *oldname, const char __user *newname)
{
	long retval = sys_rename(oldname, newname);
	//Logger here
	return retval;
}

long hook_sys_chmod(const char __user *filename, mode_t mode)
{
	long retval = sys_chmod(filename, mode);
	//Logger here
	return retval;
}

long hook_sys_fchmod(unsigned int fd, mode_t mode)
{
	long retval = sys_fchmod(fd, mode);
	//Logger here
	return retval;
}

long hook_sys_fcntl(unsigned int fd, unsigned int cmd, unsigned long arg)
{
	long retval = sys_fcntl(fd, cmd, arg);
	//Logger here
	return retval;
}

long hook_sys_fcntl64(unsigned int fd, unsigned int cmd, unsigned long arg)
{
	long retval = sys_fcntl64(fd, cmd, arg);
	//Logger here
	return retval;
}

long hook_sys_pipe(int __user *fildes)
{
	long retval = sys_pipe(fildes);
	//Logger here
	return retval;
}

long hook_sys_pipe2(int __user *fildes, int flags)
{
	long retval = sys_pipe2(fildes, flags);
	//Logger here
	return retval;
}

long hook_sys_dup(unsigned int fildes)
{
	long retval = sys_dup(fildes);
	//Logger here
	return retval;
}

long hook_sys_dup2(unsigned int oldfd, unsigned int newfd)
{
	long retval = sys_dup2(oldfd, newfd);
	//Logger here
	return retval;
}

long hook_sys_dup3(unsigned int oldfd, unsigned int newfd, int flags)
{
	long retval = sys_dup3(oldfd, newfd, flags);
	//Logger here
	return retval;
}

long hook_sys_ioperm(unsigned long from, unsigned long num, int on)
{
	long retval = sys_ioperm(from, num, on);
	//Logger here
	return retval;
}

long hook_sys_ioctl(unsigned int fd, unsigned int cmd, unsigned long arg)
{
	long retval = sys_ioctl(fd, cmd, arg);
	//Logger here
	return retval;
}

long hook_sys_flock(unsigned int fd, unsigned int cmd)
{
	long retval = sys_flock(fd, cmd);
	//Logger here
	return retval;
}

long hook_sys_io_setup(unsigned nr_reqs, aio_context_t __user *ctx)
{
	long retval = sys_io_setup(nr_reqs, ctx);
	//Logger here
	return retval;
}

long hook_sys_io_destroy(aio_context_t ctx)
{
	long retval = sys_io_destroy(ctx);
	//Logger here
	return retval;
}

long hook_sys_io_getevents(aio_context_t ctx_id, long min_nr, long nr, struct io_event __user *events, struct timespec __user *timeout)
{
	long retval = sys_io_getevents(ctx_id, min_nr, nr, events, timeout);
	//Logger here
	return retval;
}

long hook_sys_io_submit(aio_context_t, long arg1, struct iocb __user * __user *arg2)
{
	long retval = sys_io_submit(aio_context_t, arg1, arg2);
	//Logger here
	return retval;
}

long hook_sys_io_cancel(aio_context_t ctx_id, struct iocb __user *iocb, struct io_event __user *result)
{
	long retval = sys_io_cancel(ctx_id, iocb, result);
	//Logger here
	return retval;
}

long hook_sys_sendfile(int out_fd, int in_fd, off_t __user *offset, size_t count)
{
	long retval = sys_sendfile(out_fd, in_fd, offset, count);
	//Logger here
	return retval;
}

long hook_sys_sendfile64(int out_fd, int in_fd, loff_t __user *offset, size_t count)
{
	long retval = sys_sendfile64(out_fd, in_fd, offset, count);
	//Logger here
	return retval;
}

long hook_sys_readlink(const char __user *path, char __user *buf, int bufsiz)
{
	long retval = sys_readlink(path, buf, bufsiz);
	//Logger here
	return retval;
}

long hook_sys_creat(const char __user *pathname, int mode)
{
	long retval = sys_creat(pathname, mode);
	//Logger here
	return retval;
}

long hook_sys_open(const char __user *filename, int flags, int mode)
{
	long retval = sys_open(filename, flags, mode);
	//Logger here
	return retval;
}

long hook_sys_close(unsigned int fd)
{
	long retval = sys_close(fd);
	//Logger here
	return retval;
}

long hook_sys_access(const char __user *filename, int mode)
{
	long retval = sys_access(filename, mode);
	//Logger here
	return retval;
}

long hook_sys_vhangup(void)
{
	long retval = sys_vhangup();
	//Logger here
	return retval;
}

long hook_sys_chown(const char __user *filename, uid_t user, gid_t group)
{
	long retval = sys_chown(filename, user, group);
	//Logger here
	return retval;
}

long hook_sys_lchown(const char __user *filename, uid_t user, gid_t group)
{
	long retval = sys_lchown(filename, user, group);
	//Logger here
	return retval;
}

long hook_sys_fchown(unsigned int fd, uid_t user, gid_t group)
{
	long retval = sys_fchown(fd, user, group);
	//Logger here
	return retval;
}

long hook_sys_chown16(const char __user *filename, old_uid_t user, old_gid_t group)
{
	long retval = sys_chown16(filename, user, group);
	//Logger here
	return retval;
}

long hook_sys_lchown16(const char __user *filename, old_uid_t user, old_gid_t group)
{
	long retval = sys_lchown16(filename, user, group);
	//Logger here
	return retval;
}

long hook_sys_fchown16(unsigned int fd, old_uid_t user, old_gid_t group)
{
	long retval = sys_fchown16(fd, user, group);
	//Logger here
	return retval;
}

long hook_sys_setregid16(old_gid_t rgid, old_gid_t egid)
{
	long retval = sys_setregid16(rgid, egid);
	//Logger here
	return retval;
}

long hook_sys_setgid16(old_gid_t gid)
{
	long retval = sys_setgid16(gid);
	//Logger here
	return retval;
}

long hook_sys_setreuid16(old_uid_t ruid, old_uid_t euid)
{
	long retval = sys_setreuid16(ruid, euid);
	//Logger here
	return retval;
}

long hook_sys_setuid16(old_uid_t uid)
{
	long retval = sys_setuid16(uid);
	//Logger here
	return retval;
}

long hook_sys_setresuid16(old_uid_t ruid, old_uid_t euid, old_uid_t suid)
{
	long retval = sys_setresuid16(ruid, euid, suid);
	//Logger here
	return retval;
}

long hook_sys_getresuid16(old_uid_t __user *ruid, old_uid_t __user *euid, old_uid_t __user *suid)
{
	long retval = sys_getresuid16(ruid, euid, suid);
	//Logger here
	return retval;
}

long hook_sys_setresgid16(old_gid_t rgid, old_gid_t egid, old_gid_t sgid)
{
	long retval = sys_setresgid16(rgid, egid, sgid);
	//Logger here
	return retval;
}

long hook_sys_getresgid16(old_gid_t __user *rgid, old_gid_t __user *egid, old_gid_t __user *sgid)
{
	long retval = sys_getresgid16(rgid, egid, sgid);
	//Logger here
	return retval;
}

long hook_sys_setfsuid16(old_uid_t uid)
{
	long retval = sys_setfsuid16(uid);
	//Logger here
	return retval;
}

long hook_sys_setfsgid16(old_gid_t gid)
{
	long retval = sys_setfsgid16(gid);
	//Logger here
	return retval;
}

long hook_sys_getgroups16(int gidsetsize, old_gid_t __user *grouplist)
{
	long retval = sys_getgroups16(gidsetsize, grouplist);
	//Logger here
	return retval;
}

long hook_sys_setgroups16(int gidsetsize, old_gid_t __user *grouplist)
{
	long retval = sys_setgroups16(gidsetsize, grouplist);
	//Logger here
	return retval;
}

long hook_sys_getuid16(void)
{
	long retval = sys_getuid16();
	//Logger here
	return retval;
}

long hook_sys_geteuid16(void)
{
	long retval = sys_geteuid16();
	//Logger here
	return retval;
}

long hook_sys_getgid16(void)
{
	long retval = sys_getgid16();
	//Logger here
	return retval;
}

long hook_sys_getegid16(void)
{
	long retval = sys_getegid16();
	//Logger here
	return retval;
}

long hook_sys_utime(char __user *filename, struct utimbuf __user *times)
{
	long retval = sys_utime(filename, times);
	//Logger here
	return retval;
}

long hook_sys_utimes(char __user *filename, struct timeval __user *utimes)
{
	long retval = sys_utimes(filename, utimes);
	//Logger here
	return retval;
}

long hook_sys_lseek(unsigned int fd, off_t offset, unsigned int origin)
{
	long retval = sys_lseek(fd, offset, origin);
	//Logger here
	return retval;
}

long hook_sys_llseek(unsigned int fd, unsigned long offset_high, unsigned long offset_low, loff_t __user *result, unsigned int origin)
{
	long retval = sys_llseek(fd, offset_high, offset_low, result, origin);
	//Logger here
	return retval;
}

long hook_sys_read(unsigned int fd, char __user *buf, size_t count)
{
	long retval = sys_read(fd, buf, count);
	//Logger here
	return retval;
}

long hook_sys_readahead(int fd, loff_t offset, size_t count)
{
	long retval = sys_readahead(fd, offset, count);
	//Logger here
	return retval;
}

long hook_sys_readv(unsigned long fd, const struct iovec __user *vec, unsigned long vlen)
{
	long retval = sys_readv(fd, vec, vlen);
	//Logger here
	return retval;
}

long hook_sys_write(unsigned int fd, const char __user *buf, size_t count)
{
	long retval = sys_write(fd, buf, count);
	//Logger here
	return retval;
}

long hook_sys_writev(unsigned long fd, const struct iovec __user *vec, unsigned long vlen)
{
	long retval = sys_writev(fd, vec, vlen);
	//Logger here
	return retval;
}

long hook_sys_pread64(unsigned int fd, char __user *buf, size_t count, loff_t pos)
{
	long retval = sys_pread64(fd, buf, count, pos);
	//Logger here
	return retval;
}

long hook_sys_pwrite64(unsigned int fd, const char __user *buf, size_t count, loff_t pos)
{
	long retval = sys_pwrite64(fd, buf, count, pos);
	//Logger here
	return retval;
}

long hook_sys_preadv(unsigned long fd, const struct iovec __user *vec, unsigned long vlen, unsigned long pos_l, unsigned long pos_h)
{
	long retval = sys_preadv(fd, vec, vlen, pos_l, pos_h);
	//Logger here
	return retval;
}

long hook_sys_pwritev(unsigned long fd, const struct iovec __user *vec, unsigned long vlen, unsigned long pos_l, unsigned long pos_h)
{
	long retval = sys_pwritev(fd, vec, vlen, pos_l, pos_h);
	//Logger here
	return retval;
}

long hook_sys_getcwd(char __user *buf, unsigned long size)
{
	long retval = sys_getcwd(buf, size);
	//Logger here
	return retval;
}

long hook_sys_mkdir(const char __user *pathname, int mode)
{
	long retval = sys_mkdir(pathname, mode);
	//Logger here
	return retval;
}

long hook_sys_chdir(const char __user *filename)
{
	long retval = sys_chdir(filename);
	//Logger here
	return retval;
}

long hook_sys_fchdir(unsigned int fd)
{
	long retval = sys_fchdir(fd);
	//Logger here
	return retval;
}

long hook_sys_rmdir(const char __user *pathname)
{
	long retval = sys_rmdir(pathname);
	//Logger here
	return retval;
}

long hook_sys_lookup_dcookie(u64 cookie64, char __user *buf, size_t len)
{
	long retval = sys_lookup_dcookie(cookie64, buf, len);
	//Logger here
	return retval;
}

long hook_sys_quotactl(unsigned int cmd, const char __user *special, qid_t id, void __user *addr)
{
	long retval = sys_quotactl(cmd, special, id, addr);
	//Logger here
	return retval;
}

long hook_sys_getdents(unsigned int fd, struct linux_dirent __user *dirent, unsigned int count)
{
	long retval = sys_getdents(fd, dirent, count);
	//Logger here
	return retval;
}

long hook_sys_getdents64(unsigned int fd, struct linux_dirent64 __user *dirent, unsigned int count)
{
	long retval = sys_getdents64(fd, dirent, count);
	//Logger here
	return retval;
}

long hook_sys_setsockopt(int fd, int level, int optname, char __user *optval, int optlen)
{
	long retval = sys_setsockopt(fd, level, optname, optval, optlen);
	//Logger here
	return retval;
}

long hook_sys_getsockopt(int fd, int level, int optname, char __user *optval, int __user *optlen)
{
	long retval = sys_getsockopt(fd, level, optname, optval, optlen);
	//Logger here
	return retval;
}

long hook_sys_bind(int arg0, struct sockaddr __user *arg1, int arg2)
{
	long retval = sys_bind(arg0, arg1, arg2);
	//Logger here
	return retval;
}

long hook_sys_connect(int arg0, struct sockaddr __user *arg1, int arg2)
{
	long retval = sys_connect(arg0, arg1, arg2);
	//Logger here
	return retval;
}

long hook_sys_accept(int arg0, struct sockaddr __user *arg1, int __user *arg2)
{
	long retval = sys_accept(arg0, arg1, arg2);
	//Logger here
	return retval;
}

long hook_sys_accept4(int arg0, struct sockaddr __user *arg1, int __user *arg2, int arg3)
{
	long retval = sys_accept4(arg0, arg1, arg2, arg3);
	//Logger here
	return retval;
}

long hook_sys_getsockname(int arg0, struct sockaddr __user *arg1, int __user *arg2)
{
	long retval = sys_getsockname(arg0, arg1, arg2);
	//Logger here
	return retval;
}

long hook_sys_getpeername(int arg0, struct sockaddr __user *arg1, int __user *arg2)
{
	long retval = sys_getpeername(arg0, arg1, arg2);
	//Logger here
	return retval;
}

long hook_sys_send(int arg0, void __user *arg1, size_t arg2, unsigned)
{
	long retval = sys_send(arg0, arg1, arg2, unsigned);
	//Logger here
	return retval;
}

long hook_sys_sendto(int arg0, void __user *arg1, size_t arg2, unsigned, struct sockaddr __user *arg4, int arg5)
{
	long retval = sys_sendto(arg0, arg1, arg2, unsigned, arg4, arg5);
	//Logger here
	return retval;
}

long hook_sys_sendmsg(int fd, struct msghdr __user *msg, unsigned flags)
{
	long retval = sys_sendmsg(fd, msg, flags);
	//Logger here
	return retval;
}

long hook_sys_recv(int arg0, void __user *arg1, size_t arg2, unsigned)
{
	long retval = sys_recv(arg0, arg1, arg2, unsigned);
	//Logger here
	return retval;
}

long hook_sys_recvfrom(int arg0, void __user *arg1, size_t arg2, unsigned, struct sockaddr __user *arg4, int __user *arg5)
{
	long retval = sys_recvfrom(arg0, arg1, arg2, unsigned, arg4, arg5);
	//Logger here
	return retval;
}

long hook_sys_recvmsg(int fd, struct msghdr __user *msg, unsigned flags)
{
	long retval = sys_recvmsg(fd, msg, flags);
	//Logger here
	return retval;
}

long hook_sys_socket(int arg0, int arg1, int arg2)
{
	long retval = sys_socket(arg0, arg1, arg2);
	//Logger here
	return retval;
}

long hook_sys_socketpair(int arg0, int arg1, int arg2, int __user *arg3)
{
	long retval = sys_socketpair(arg0, arg1, arg2, arg3);
	//Logger here
	return retval;
}

long hook_sys_socketcall(int call, unsigned long __user *args)
{
	long retval = sys_socketcall(call, args);
	//Logger here
	return retval;
}

long hook_sys_listen(int arg0, int arg1)
{
	long retval = sys_listen(arg0, arg1);
	//Logger here
	return retval;
}

long hook_sys_poll(struct pollfd __user *ufds, unsigned int nfds, long timeout)
{
	long retval = sys_poll(ufds, nfds, timeout);
	//Logger here
	return retval;
}

long hook_sys_select(int n, fd_set __user *inp, fd_set __user *outp, fd_set __user *exp, struct timeval __user *tvp)
{
	long retval = sys_select(n, inp, outp, exp, tvp);
	//Logger here
	return retval;
}

long hook_sys_epoll_create(int size)
{
	long retval = sys_epoll_create(size);
	//Logger here
	return retval;
}

long hook_sys_epoll_create1(int flags)
{
	long retval = sys_epoll_create1(flags);
	//Logger here
	return retval;
}

long hook_sys_epoll_ctl(int epfd, int op, int fd, struct epoll_event __user *event)
{
	long retval = sys_epoll_ctl(epfd, op, fd, event);
	//Logger here
	return retval;
}

long hook_sys_epoll_wait(int epfd, struct epoll_event __user *events, int maxevents, int timeout)
{
	long retval = sys_epoll_wait(epfd, events, maxevents, timeout);
	//Logger here
	return retval;
}

long hook_sys_epoll_pwait(int epfd, struct epoll_event __user *events, int maxevents, int timeout, const sigset_t __user *sigmask, size_t sigsetsize)
{
	long retval = sys_epoll_pwait(epfd, events, maxevents, timeout, sigmask, sigsetsize);
	//Logger here
	return retval;
}

long hook_sys_gethostname(char __user *name, int len)
{
	long retval = sys_gethostname(name, len);
	//Logger here
	return retval;
}

long hook_sys_sethostname(char __user *name, int len)
{
	long retval = sys_sethostname(name, len);
	//Logger here
	return retval;
}

long hook_sys_setdomainname(char __user *name, int len)
{
	long retval = sys_setdomainname(name, len);
	//Logger here
	return retval;
}

long hook_sys_newuname(struct new_utsname __user *name)
{
	long retval = sys_newuname(name);
	//Logger here
	return retval;
}

long hook_sys_getrlimit(unsigned int resource, struct rlimit __user *rlim)
{
	long retval = sys_getrlimit(resource, rlim);
	//Logger here
	return retval;
}

long hook_sys_old_getrlimit(unsigned int resource, struct rlimit __user *rlim)
{
	long retval = sys_old_getrlimit(resource, rlim);
	//Logger here
	return retval;
}

long hook_sys_setrlimit(unsigned int resource, struct rlimit __user *rlim)
{
	long retval = sys_setrlimit(resource, rlim);
	//Logger here
	return retval;
}

long hook_sys_getrusage(int who, struct rusage __user *ru)
{
	long retval = sys_getrusage(who, ru);
	//Logger here
	return retval;
}

long hook_sys_umask(int mask)
{
	long retval = sys_umask(mask);
	//Logger here
	return retval;
}

long hook_sys_msgget(key_t key, int msgflg)
{
	long retval = sys_msgget(key, msgflg);
	//Logger here
	return retval;
}

long hook_sys_msgsnd(int msqid, struct msgbuf __user *msgp, size_t msgsz, int msgflg)
{
	long retval = sys_msgsnd(msqid, msgp, msgsz, msgflg);
	//Logger here
	return retval;
}

long hook_sys_msgrcv(int msqid, struct msgbuf __user *msgp, size_t msgsz, long msgtyp, int msgflg)
{
	long retval = sys_msgrcv(msqid, msgp, msgsz, msgtyp, msgflg);
	//Logger here
	return retval;
}

long hook_sys_msgctl(int msqid, int cmd, struct msqid_ds __user *buf)
{
	long retval = sys_msgctl(msqid, cmd, buf);
	//Logger here
	return retval;
}

long hook_sys_semget(key_t key, int nsems, int semflg)
{
	long retval = sys_semget(key, nsems, semflg);
	//Logger here
	return retval;
}

long hook_sys_semop(int semid, struct sembuf __user *sops, unsigned nsops)
{
	long retval = sys_semop(semid, sops, nsops);
	//Logger here
	return retval;
}

long hook_sys_semctl(int semid, int semnum, int cmd, union semun arg)
{
	long retval = sys_semctl(semid, semnum, cmd, arg);
	//Logger here
	return retval;
}

long hook_sys_semtimedop(int semid, struct sembuf __user *sops, unsigned nsops, const struct timespec __user *timeout)
{
	long retval = sys_semtimedop(semid, sops, nsops, timeout);
	//Logger here
	return retval;
}

long hook_sys_shmat(int shmid, char __user *shmaddr, int shmflg)
{
	long retval = sys_shmat(shmid, shmaddr, shmflg);
	//Logger here
	return retval;
}

long hook_sys_shmget(key_t key, size_t size, int flag)
{
	long retval = sys_shmget(key, size, flag);
	//Logger here
	return retval;
}

long hook_sys_shmdt(char __user *shmaddr)
{
	long retval = sys_shmdt(shmaddr);
	//Logger here
	return retval;
}

long hook_sys_shmctl(int shmid, int cmd, struct shmid_ds __user *buf)
{
	long retval = sys_shmctl(shmid, cmd, buf);
	//Logger here
	return retval;
}

long hook_sys_mq_open(const char __user *name, int oflag, mode_t mode, struct mq_attr __user *attr)
{
	long retval = sys_mq_open(name, oflag, mode, attr);
	//Logger here
	return retval;
}

long hook_sys_mq_unlink(const char __user *name)
{
	long retval = sys_mq_unlink(name);
	//Logger here
	return retval;
}

long hook_sys_mq_timedsend(mqd_t mqdes, const char __user *msg_ptr, size_t msg_len, unsigned int msg_prio, const struct timespec __user *abs_timeout)
{
	long retval = sys_mq_timedsend(mqdes, msg_ptr, msg_len, msg_prio, abs_timeout);
	//Logger here
	return retval;
}

long hook_sys_mq_timedreceive(mqd_t mqdes, char __user *msg_ptr, size_t msg_len, unsigned int __user *msg_prio, const struct timespec __user *abs_timeout)
{
	long retval = sys_mq_timedreceive(mqdes, msg_ptr, msg_len, msg_prio, abs_timeout);
	//Logger here
	return retval;
}

long hook_sys_mq_notify(mqd_t mqdes, const struct sigevent __user *notification)
{
	long retval = sys_mq_notify(mqdes, notification);
	//Logger here
	return retval;
}

long hook_sys_mq_getsetattr(mqd_t mqdes, const struct mq_attr __user *mqstat, struct mq_attr __user *omqstat)
{
	long retval = sys_mq_getsetattr(mqdes, mqstat, omqstat);
	//Logger here
	return retval;
}

long hook_sys_pciconfig_iobase(long which, unsigned long bus, unsigned long devfn)
{
	long retval = sys_pciconfig_iobase(which, bus, devfn);
	//Logger here
	return retval;
}

long hook_sys_pciconfig_read(unsigned long bus, unsigned long dfn, unsigned long off, unsigned long len, void __user *buf)
{
	long retval = sys_pciconfig_read(bus, dfn, off, len, buf);
	//Logger here
	return retval;
}

long hook_sys_pciconfig_write(unsigned long bus, unsigned long dfn, unsigned long off, unsigned long len, void __user *buf)
{
	long retval = sys_pciconfig_write(bus, dfn, off, len, buf);
	//Logger here
	return retval;
}

long hook_sys_prctl(int option, unsigned long arg2, unsigned long arg3, unsigned long arg4, unsigned long arg5)
{
	long retval = sys_prctl(option, arg2, arg3, arg4, arg5);
	//Logger here
	return retval;
}

long hook_sys_swapon(const char __user *specialfile, int swap_flags)
{
	long retval = sys_swapon(specialfile, swap_flags);
	//Logger here
	return retval;
}

long hook_sys_swapoff(const char __user *specialfile)
{
	long retval = sys_swapoff(specialfile);
	//Logger here
	return retval;
}

long hook_sys_sysctl(struct __sysctl_args __user *args)
{
	long retval = sys_sysctl(args);
	//Logger here
	return retval;
}

long hook_sys_sysinfo(struct sysinfo __user *info)
{
	long retval = sys_sysinfo(info);
	//Logger here
	return retval;
}

long hook_sys_sysfs(int option, unsigned long arg1, unsigned long arg2)
{
	long retval = sys_sysfs(option, arg1, arg2);
	//Logger here
	return retval;
}

long hook_sys_nfsservctl(int cmd, struct nfsctl_arg __user *arg, void __user *res)
{
	long retval = sys_nfsservctl(cmd, arg, res);
	//Logger here
	return retval;
}

long hook_sys_syslog(int type, char __user *buf, int len)
{
	long retval = sys_syslog(type, buf, len);
	//Logger here
	return retval;
}

long hook_sys_uselib(const char __user *library)
{
	long retval = sys_uselib(library);
	//Logger here
	return retval;
}

long hook_sys_ni_syscall(void)
{
	long retval = sys_ni_syscall();
	//Logger here
	return retval;
}

long hook_sys_ptrace(long request, long pid, long addr, long data)
{
	long retval = sys_ptrace(request, pid, addr, data);
	//Logger here
	return retval;
}

long hook_sys_add_key(const char __user *_type, const char __user *_description, const void __user *_payload, size_t plen, key_serial_t destringid)
{
	long retval = sys_add_key(_type, _description, _payload, plen, destringid);
	//Logger here
	return retval;
}

long hook_sys_request_key(const char __user *_type, const char __user *_description, const char __user *_callout_info, key_serial_t destringid)
{
	long retval = sys_request_key(_type, _description, _callout_info, destringid);
	//Logger here
	return retval;
}

long hook_sys_keyctl(int cmd, unsigned long arg2, unsigned long arg3, unsigned long arg4, unsigned long arg5)
{
	long retval = sys_keyctl(cmd, arg2, arg3, arg4, arg5);
	//Logger here
	return retval;
}

long hook_sys_ioprio_set(int which, int who, int ioprio)
{
	long retval = sys_ioprio_set(which, who, ioprio);
	//Logger here
	return retval;
}

long hook_sys_ioprio_get(int which, int who)
{
	long retval = sys_ioprio_get(which, who);
	//Logger here
	return retval;
}

long hook_sys_set_mempolicy(int mode, unsigned long __user *nmask, unsigned long maxnode)
{
	long retval = sys_set_mempolicy(mode, nmask, maxnode);
	//Logger here
	return retval;
}

long hook_sys_migrate_pages(pid_t pid, unsigned long maxnode, const unsigned long __user *from, const unsigned long __user *to)
{
	long retval = sys_migrate_pages(pid, maxnode, from, to);
	//Logger here
	return retval;
}

long hook_sys_move_pages(pid_t pid, unsigned long nr_pages,	const void __user * __user *pages, const int __user *nodes, int __user *status,	int flags)
{
	long retval = sys_move_pages(pid, nr_pages, pages, nodes, status, flags);
	//Logger here
	return retval;
}

long hook_sys_mbind(unsigned long start, unsigned long len,	unsigned long mode,	unsigned long __user *nmask, unsigned long maxnode,	unsigned flags)
{
	long retval = sys_mbind(start, len, mode, nmask, maxnode, flags);
	//Logger here
	return retval;
}

long hook_sys_get_mempolicy(int __user *policy, unsigned long __user *nmask, unsigned long maxnode, unsigned long addr, unsigned long flags)
{
	long retval = sys_get_mempolicy(policy, nmask, maxnode, addr, flags);
	//Logger here
	return retval;
}

long hook_sys_inotify_init(void)
{
	long retval = sys_inotify_init();
	//Logger here
	return retval;
}

long hook_sys_inotify_init1(int flags)
{
	long retval = sys_inotify_init1(flags);
	//Logger here
	return retval;
}

long hook_sys_inotify_add_watch(int fd, const char __user *path, u32 mask)
{
	long retval = sys_inotify_add_watch(fd, path, mask);
	//Logger here
	return retval;
}

long hook_sys_inotify_rm_watch(int fd, __s32 wd)
{
	long retval = sys_inotify_rm_watch(fd, wd);
	//Logger here
	return retval;
}

long hook_sys_spu_run(int fd, __u32 __user *unpc, __u32 __user *ustatus)
{
	long retval = sys_spu_run(fd, unpc, ustatus);
	//Logger here
	return retval;
}

long hook_sys_spu_create(const char __user *name, unsigned int flags, mode_t mode, int fd)
{
	long retval = sys_spu_create(name, flags, mode, fd);
	//Logger here
	return retval;
}

long hook_sys_mknodat(int dfd, const char __user * filename, int mode, unsigned dev)
{
	long retval = sys_mknodat(dfd, filename, mode, dev);
	//Logger here
	return retval;
}

long hook_sys_mkdirat(int dfd, const char __user * pathname, int mode)
{
	long retval = sys_mkdirat(dfd, pathname, mode);
	//Logger here
	return retval;
}

long hook_sys_unlinkat(int dfd, const char __user * pathname, int flag)
{
	long retval = sys_unlinkat(dfd, pathname, flag);
	//Logger here
	return retval;
}

long hook_sys_symlinkat(const char __user * oldname, int newdfd, const char __user * newname)
{
	long retval = sys_symlinkat(oldname, newdfd, newname);
	//Logger here
	return retval;
}

long hook_sys_linkat(int olddfd, const char __user *oldname, int newdfd, const char __user *newname, int flags)
{
	long retval = sys_linkat(olddfd, oldname, newdfd, newname, flags);
	//Logger here
	return retval;
}

long hook_sys_renameat(int olddfd, const char __user * oldname, int newdfd, const char __user * newname)
{
	long retval = sys_renameat(olddfd, oldname, newdfd, newname);
	//Logger here
	return retval;
}

long hook_sys_futimesat(int dfd, char __user *filename, struct timeval __user *utimes)
{
	long retval = sys_futimesat(dfd, filename, utimes);
	//Logger here
	return retval;
}

long hook_sys_faccessat(int dfd, const char __user *filename, int mode)
{
	long retval = sys_faccessat(dfd, filename, mode);
	//Logger here
	return retval;
}

long hook_sys_fchmodat(int dfd, const char __user * filename, mode_t mode)
{
	long retval = sys_fchmodat(dfd, filename, mode);
	//Logger here
	return retval;
}

long hook_sys_fchownat(int dfd, const char __user *filename, uid_t user, gid_t group, int flag)
{
	long retval = sys_fchownat(dfd, filename, user, group, flag);
	//Logger here
	return retval;
}

long hook_sys_openat(int dfd, const char __user *filename, int flags, int mode)
{
	long retval = sys_openat(dfd, filename, flags, mode);
	//Logger here
	return retval;
}

long hook_sys_newfstatat(int dfd, char __user *filename, struct stat __user *statbuf, int flag)
{
	long retval = sys_newfstatat(dfd, filename, statbuf, flag);
	//Logger here
	return retval;
}

long hook_sys_fstatat64(int dfd, char __user *filename, struct stat64 __user *statbuf, int flag)
{
	long retval = sys_fstatat64(dfd, filename, statbuf, flag);
	//Logger here
	return retval;
}

long hook_sys_readlinkat(int dfd, const char __user *path, char __user *buf, int bufsiz)
{
	long retval = sys_readlinkat(dfd, path, buf, bufsiz);
	//Logger here
	return retval;
}

long hook_sys_utimensat(int dfd, char __user *filename,	struct timespec __user *utimes, int flags)
{
	long retval = sys_utimensat(dfd, filename, utimes, flags);
	//Logger here
	return retval;
}

long hook_sys_unshare(unsigned long unshare_flags)
{
	long retval = sys_unshare(unshare_flags);
	//Logger here
	return retval;
}

long hook_sys_splice(int fd_in, loff_t __user *off_in, int fd_out, loff_t __user *off_out, size_t len, unsigned int flags)
{
	long retval = sys_splice(fd_in, off_in, fd_out, off_out, len, flags);
	//Logger here
	return retval;
}

long hook_sys_vmsplice(int fd, const struct iovec __user *iov, unsigned long nr_segs, unsigned int flags)
{
	long retval = sys_vmsplice(fd, iov, nr_segs, flags);
	//Logger here
	return retval;
}

long hook_sys_tee(int fdin, int fdout, size_t len, unsigned int flags)
{
	long retval = sys_tee(fdin, fdout, len, flags);
	//Logger here
	return retval;
}

long hook_sys_sync_file_range(int fd, loff_t offset, loff_t nbytes,	unsigned int flags)
{
	long retval = sys_sync_file_range(fd, offset, nbytes, flags);
	//Logger here
	return retval;
}

long hook_sys_sync_file_range2(int fd, unsigned int flags, loff_t offset, loff_t nbytes)
{
	long retval = sys_sync_file_range2(fd, flags, offset, nbytes);
	//Logger here
	return retval;
}

long hook_sys_get_robust_list(int pid, struct robust_list_head __user * __user *head_ptr, size_t __user *len_ptr)
{
	long retval = sys_get_robust_list(pid, head_ptr, len_ptr);
	//Logger here
	return retval;
}

long hook_sys_set_robust_list(struct robust_list_head __user *head, size_t len)
{
	long retval = sys_set_robust_list(head, len);
	//Logger here
	return retval;
}

long hook_sys_getcpu(unsigned __user *cpu, unsigned __user *node, struct getcpu_cache __user *cache)
{
	long retval = sys_getcpu(cpu, node, cache);
	//Logger here
	return retval;
}

long hook_sys_signalfd(int ufd, sigset_t __user *user_mask, size_t sizemask)
{
	long retval = sys_signalfd(ufd, user_mask, sizemask);
	//Logger here
	return retval;
}

long hook_sys_signalfd4(int ufd, sigset_t __user *user_mask, size_t sizemask, int flags)
{
	long retval = sys_signalfd4(ufd, user_mask, sizemask, flags);
	//Logger here
	return retval;
}

long hook_sys_timerfd_create(int clockid, int flags)
{
	long retval = sys_timerfd_create(clockid, flags);
	//Logger here
	return retval;
}

long hook_sys_timerfd_settime(int ufd, int flags, const struct itimerspec __user *utmr, struct itimerspec __user *otmr)
{
	long retval = sys_timerfd_settime(ufd, flags, utmr, otmr);
	//Logger here
	return retval;
}

long hook_sys_timerfd_gettime(int ufd, struct itimerspec __user *otmr)
{
	long retval = sys_timerfd_gettime(ufd, otmr);
	//Logger here
	return retval;
}

long hook_sys_eventfd(unsigned int count)
{
	long retval = sys_eventfd(count);
	//Logger here
	return retval;
}

long hook_sys_eventfd2(unsigned int count, int flags)
{
	long retval = sys_eventfd2(count, flags);
	//Logger here
	return retval;
}

long hook_sys_fallocate(int fd, int mode, loff_t offset, loff_t len)
{
	long retval = sys_fallocate(fd, mode, offset, len);
	//Logger here
	return retval;
}

long hook_sys_old_readdir(unsigned int arg0, struct old_linux_dirent __user *arg1, unsigned int arg2)
{
	long retval = sys_old_readdir(arg0, arg1, arg2);
	//Logger here
	return retval;
}

long hook_sys_pselect6(int arg0, fd_set __user *arg1, fd_set __user *arg2, fd_set __user *arg3, struct timespec __user *arg4, void __user *arg5)
{
	long retval = sys_pselect6(arg0, arg1, arg2, arg3, arg4, arg5);
	//Logger here
	return retval;
}

long hook_sys_ppoll(struct pollfd __user *arg0, unsigned int arg1, struct timespec __user *arg2, const sigset_t __user *arg3, size_t arg4)
{
	long retval = sys_ppoll(arg0, arg1, arg2, arg3, arg4);
	//Logger here
	return retval;
}

long hook_sys_perf_event_open(struct perf_event_attr __user *attr_uptr,	pid_t pid, int cpu, int group_fd, unsigned long flags)
{
	long retval = sys_perf_event_open(attr_uptr, pid, cpu, group_fd, flags);
	//Logger here
	return retval;
}

long hook_sys_mmap_pgoff(unsigned long addr, unsigned long len, unsigned long prot, unsigned long flags, unsigned long fd, unsigned long pgoff)
{
	long retval = sys_mmap_pgoff(addr, len, prot, flags, fd, pgoff);
	//Logger here
	return retval;
}