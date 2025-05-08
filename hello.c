#include <linux/module.h>   // Required for all kernel modules
#include <linux/kernel.h>   // For KERN_INFO, printk()
#include <linux/init.h>     // For __init and __exit macros

#define DRIVER_NAME "hello_kernel"

// Module metadata (visible with `modinfo`)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("A simple Linux driver");
MODULE_VERSION("0.1");

// Runs when the module is loaded
static int __init hello_init(void) {
    printk(KERN_INFO "Hello, Kernel World!\n");
    return 0;  // 0 means success
}

// Runs when the module is unloaded
static void __exit hello_exit(void) {
    printk(KERN_INFO "Goodbye, Kernel World!\n");
}

// Register init/exit functions
module_init(hello_init);
module_exit(hello_exit);
