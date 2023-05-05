obj-m += divide_by_zero_fault.o
obj-m += panic_trigger_fault.o
obj-m += memory_access_fault.o
obj-m += null_pointer_fault.o
obj-m += buffer_overflow_fault.o
obj-m += stack_overflow_fault.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
