### Andrew Pickner
anpi7267@colorado.edu
102333599

`add.c` : This is my user program that tests the cs3753_add syscall. 
It can be located in the build tree or not, doesn't really matter.

`cs3753_add.c` : This file implements the system call function we have to implement.
We're required to include some linux files and we have to use the asmlinkage keyword.
This file is located in the /arch/x86/kernel directory.

`Makefile` : This file builds the kernel from my understanding. 
It adds the object files together, and this is where we add our .o files to obj-y.
This file is located in the /arch/x86/kernel/ directory.

`syscall_64.tbl` : This file is the table of syscalls the OS references. 
This table allows OS to quickly vector itself into the code it needs to execute.
This file is loacted in the /arch/x86/entry/syscalls/ directory.

`syscalls.h` : This file is where we implement the prototype of our syscall.
This file is located in the /include/linux/ directory.

`/var/log/syslog` : This file contains the output from the printk statements in my syscall.

##### How to Build:

My user program just hard codes the system call to add 3 and 5. To build, run `gcc add.c`, and then `./a.out`.

##### Other relevant info:

I really tried to use get_user() / copy_from_user() but my system call was working until I simplified it. I'm not really sure where I was going wrong, excited for my interview grading!
