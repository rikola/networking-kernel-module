/*
 *	hello-1.c - The simplest kernel module.
 */

#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void) {
	printk(KERN_INFO "Hello world 1.\n");

	// A non 0 return means the init_module failed. Module can't be loaded.
	return 0;
}


void cleanup_module(void) {
	printk(KERN_INFO "Goodbye world 1.\n");
}
