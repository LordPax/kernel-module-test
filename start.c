#include <linux/kernel.h>
#include <linux/module.h>

int init_module(void)
{
    pr_info("hello world 6 this is the kernel speaking\n");    
    return 0;
}

MODULE_LICENSE("GPL");
