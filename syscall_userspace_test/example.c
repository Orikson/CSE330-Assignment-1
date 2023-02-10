#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main() {
	long int my_syscall = syscall(449);
	printf("returned %ld\n", my_syscall);
	return 0;
}
