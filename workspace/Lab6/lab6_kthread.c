#ifndef MODULE
#define MODULE
#endif
#ifndef __KERNEL__
#define __KERNEL__
#endif

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/kthread.h>	// for kthreads
#include <linux/sched.h>	// for task_struct
#include <linux/time.h>		// for using jiffies 
#include <linux/timer.h>
#include <linux/delay.h>

MODULE_LICENSE("GPL");

// structure for the kthread.
static struct task_struct *kthread1;

int init_module(void){
	
	unsigned long *ptr;
	ptr = (unsigned long *)ioremap(0xF200000, 4096);
	

	while(1){

		if(kthread_should_stop()){
			do_exit(0);
		}
		
	}

	
}



void cleanup_module(void){





}
