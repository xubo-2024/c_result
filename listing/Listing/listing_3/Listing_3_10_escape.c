/* escape.c -- uses escspe characters */

#include<stdio.h>
int main(void)
{
    float salary;

    printf("\aEnter your desired monthly salary:");                     /* 1 */
    printf(" $______\b\b\b\b\b\b\b");                                   /* 2 */
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary* 12.0); /* 3 */
    printf("\rGee!\n");                                                 /* 4 */

    return 0;
}

/*
The output will be looks like that:

Enter your desired monthly salary: 30_____

Gee!    $30.00 a month is $360.00 a year.

*/