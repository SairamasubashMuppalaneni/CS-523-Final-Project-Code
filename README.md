# CS-523-Final-Project-Code

This repository contains all the code that I used to complete the research project.

Here is what’s in the repository:

1. 6 kernel module fault programs written in the C programming language.
2. A Makefile that uses the make utility to build and compile the 6 kernel module fault programs written in the C programming language.

Here is the process of reproducing the experiments that I conducted and achieving the same results:

1. Create a Virtual Machine of your choice.
2. Clone this GitHub repository within the VM.
3. Go to the directory that contains all the cloned files.
4. Run the make command.
5. Now, you can inject a kernel module fault by running the command: insmod file_name.ko 
6. If there is a crash, reboot the VM.
7. If there is no crash, observe the behavior of the operating system.
8. You can remove a kernel module fault by running the command: rmmod file_name.ko

Lastly, be sure to use VM features similar to snapshot on VirtualBox to be able to return to a previous state of the OS.
