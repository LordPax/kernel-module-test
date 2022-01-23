#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("lordpax");
MODULE_DESCRIPTION("exemple de drive");

static int hello3_data __initdata = 3;

static int __init hello_3_init(void)
{
    pr_info("hello world %d\n", hello3_data);
    return 0;
}

static void __exit hello_3_exit(void)
{
    pr_info("goodbaye world 3\n");
}

module_init(hello_3_init);
module_exit(hello_3_exit);

