// Here we are including all of the required libraries.
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

// Here we are creating a function to load the buffer overflow kernel module fault.
static int __init loading(void)
{
    // Here we are creating two variable to be used in a for loop down below.
    char bufferExaustion[10];
    int bufferInteger;

    // Printing a message when the kernel module fault is loaded.
    printk(KERN_INFO "Loading the buffer overflow kernel module fault.\n");

    // Creating a loop to cause the buffer overflow kernel moduel fault if bufferExaustion array is smaller than 16.
    for (bufferInteger = 0; bufferInteger <= 15; bufferInteger++)
    {
        // Assigning the letter S to every element in the bufferExaustion array.
        bufferExaustion[bufferInteger] = 'S';
    }

    return 0;   // Here we are returning 0;
}

// Here we are creating a function to unload the buffer overflow kernel module fault.
static void __exit unloading(void)
{
    // Printing a message when the kernel module fault is unloaded.
    printk(KERN_INFO "Unloading the buffer overflow kernel module fault.\n");
}

// Here we are loading and unloading the buffer overflow kernel module fault.
module_init(loading);
module_exit(unloading);

// Here we are setting the module license.
MODULE_LICENSE("GPL");
