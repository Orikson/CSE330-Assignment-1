# CSE 330 | Assignment 1

This Assignment 1 submission was completed by Eron Ristich, Cam Mendez, and Ethan Weiss.

## Primary Contributions
`eron_ristich` contains the code for a kernel module of the same name that prints our names to kernel output. Kernel added and removed using `insmod` and `rmmod`. Output can be verified by the corresponding screenshot

`my_syscall` contains the code for an additional syscall that prints Eron Ristich's name to kernel output. Note that additional changes were made to `/arch/x86/entry/syscalls/syscall_64.tbi` and `/Makefile`. This directory exists in the main linux build directory.

`syscall_userspace_test` contains the code for executing our created syscall by envoking syscall 449. Output can be verified by the corresponding screenshot.

## Secondary Modifications to the kernel
`/arch/x86/entry/syscalls/syscall_64.tbi`; added
`449	common	my_syscall		sys_my_syscall`
after the last non-reserved syscall entry

`/Makefile`; added
`/my_syscall`
to the core-y sub directories to make sure the makefile knows to compile our our new directory


