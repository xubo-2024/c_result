/* bases.c --print 100 in decimal, octal, and hexadecimal */

#include <stdio.h>

int main(void)
{
    int x= 100;

    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);  // adds 0 and 0x

    return 0;
}

/*
Compiling and running this program produces the following output:
dec = 100; octal = 144; hex = 64
dec = 100; octal = 0144; hex = 0x64
*/