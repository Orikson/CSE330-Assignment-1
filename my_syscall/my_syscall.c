#include <linux/kernel.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE0(my_syscall) {
	printk(KERN_INFO "This is the new system call Eron Ristich implemented.\n");
	return 0;
}

