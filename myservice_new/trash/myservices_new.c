#include <linux/kernel.h>	/* For printk */
#include <linux/syscalls.h>	/* For SYSCALL_DEFINE* */

SYSCALL_DEFINE1(log, char, *){
	printk("Printed by the kernel!\n");
	return 0;
}
