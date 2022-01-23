#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/stat.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("lordpax");
MODULE_DESCRIPTION("exemple de driver");

static short int myshort = 1;
static int myint = 420;
static long int mylong = 9999;
static char *mystring = "blah";
static int myintarray[2] = { 420, 420 };
static int arr_argc = 0;

module_param(myshort, short, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
MODULE_PARM_DESC(myshort, "a short integer");
module_param(myint, int, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
MODULE_PARM_DESC(myint, "an integer");
module_param(mylong, long, S_IRUSR);
MODULE_PARM_DESC(mylong, "a long integer");
module_param(mystring, charp, 0000);
MODULE_PARM_DESC(mystring, "a character string");
module_param_array(myintarray, int, &arr_argc, 0000);
MODULE_PARM_DESC(myintarray, "an array of integer");

static int __init hello_5_init(void)
{
    pr_info("hello, world 5\n==============\n");
    pr_info("myshort is a short integer: %hd\n", myshort);
    pr_info("myint is an short integer: %d\n", myint);
    pr_info("mylong is a long integer: %ld\n", mylong);
    pr_info("mystring is a string: %s\n", mystring);

    int i;
    for (i = 0; i < ARRAY_SIZE(myintarray); i++)
        pr_info("myintarray[%d] = %d\n", i, myintarray[i]);

    pr_info("got %d arguments for myintarray\n", arr_argc);
    return 0;
}

static void __exit hello_5_exit(void)
{
    pr_info("goodbaye world 5\n");
}

module_init(hello_5_init);
module_exit(hello_5_exit);

