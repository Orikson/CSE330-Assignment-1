#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Eron Ristich");
MODULE_DESCRIPTION("Upon initialization, prints the author's name");

static int __init init(void) {
	printk(KERN_INFO "Authors: Eron Ristich, Cam Mendez, Ethan Weiss\n");
	return 0;
}

static void __exit cleanup(void) {}

module_init(init);
module_exit(cleanup);
