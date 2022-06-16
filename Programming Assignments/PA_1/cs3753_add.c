#include <linux/kernel.h>
#include <linux/linkage.h>
#include <linux/uaccess.h>

asmlinkage long sys_cs3753_add(int number1, int number2, int *result) {
    int temp;
    printk(KERN_ALERT "We are adding the following numbers: %d & %d\n", number1, number2);
    temp = number1 + number2;
    copy_to_user(result, &temp, sizeof(int));
    printk(KERN_ALERT "The sum is: %d\n", temp);
    return 0;
}
