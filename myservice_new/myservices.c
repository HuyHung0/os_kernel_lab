#include <linux/kernel.h>	/* For printk */
#include <linux/syscalls.h>	/* For SYSCALL_DEFINE* */

SYSCALL_DEFINE0(kernelprint){
	printk("Printed by the kernel!\n");
	return 0;
}
