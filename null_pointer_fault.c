// Here we are including all of the required libraries.
#include <linux/module.h>
#include <linux/kernel.h>

// Here we are creating a function to load the null pointer kernel module fault.
static int __init loading(void)
{
    // Printing a message when the null pointer kernel module fault is loaded.
    printk(KERN_INFO "Loading the null pointer kernel module fault.\n");

    *((int *)0) = 25;   // Setting the vaule 25 equal to the memory address 0 (null pointer).

    return 0;   // Here we are returning 0;
}

// Here we are creating a function to unload the null pointer kernel module fault.
static void __exit unloading(void)
{
    // Printing a message when the null pointer fault is unloaded.
    printk(KERN_INFO "Unloading the null pointer kernel module fault.\n");
}

// Here we are loading and unloading the null pointer kernel module fault.
module_init(loading);
module_exit(unloading);

// Here we are setting the module license.
MODULE_LICENSE("GPL");

