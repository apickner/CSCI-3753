#define _GNU_SOURCE

#include <stdio.h>
#include <unistd.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <sys/types.h>

int main(int argc, char *argv[]) {
    int a = 3;
    int b = 5;
    int c;
    long int res = syscall(334, a, b, &c);
    printf("System call sys_cs3753_add returned: %ld\n", res);
    printf("Result of cs3753_add: %d + %d = %d\n", a, b, c);
    return 0;
}

