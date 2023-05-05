// Here we are including all of the required libraries.
#include <linux/module.h>
#include <linux/kernel.h>

// Here we are creating a function to load the divide by zero kernel module fault.
static int __init loading(void)
{
    // Printing a message when the kernel module fault is loaded.
    printk(KERN_INFO "Loading the divide by zero kernel module fault.\n");

    // Here we are creating three variables to do the divide by zero arithmetic.
    int one = 1;
    int zero = 0;
    int fault = one / zero;
    
    // Printing the kernel module fault information.
    printk(KERN_INFO "1 / 0 = %d\n", fault);

    return 0;   // Here we are returning 0;
}

// Here we are creating a function to unload the divide by zero kernel module fault.
static void __exit unloading(void)
{
    // Printing a message when the kernel module fault is unloaded.
    printk(KERN_INFO "Unloading the divide by zero kernel module fault.\n");
}

// Here we are loading and unloading the divde by zero kernel module fault.
module_init(loading);
module_exit(unloading);

// Here we are setting the module license.
MODULE_LICENSE("GPL");
