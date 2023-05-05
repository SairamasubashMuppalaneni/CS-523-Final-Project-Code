// Here we are including all of the required libraries.
#include <linux/module.h>
#include <linux/kernel.h>

// Here we are creating a function to load the panic trigger kernel module fault.
static int __init loading(void)
{
    // Printing a message when the kernel module fault is loaded.
    printk(KERN_INFO "Loading the panic trigger kernel module fault.\n");

    panic("Here we are calling the panic function.");   // Causing a panic in the kernel.

    return 0;   // Here we are returning 0;
}

// Here we are creating a function to unload the panic trigger kernel module fault.
static void __exit unloading(void)
{
    // Printing a message when the kernel module fault is unloaded.
    printk(KERN_INFO "Unloading the panic trigger kernel module fault.\n");
}

// Here we are loading and unloading the panic trigger kernel module fault.
module_init(loading);
module_exit(unloading);

// Here we are setting the module license.
MODULE_LICENSE("GPL");
