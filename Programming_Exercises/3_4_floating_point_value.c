/*
Write a program that reads in a floating-point number and prints it first in decimal_point
notation,then in exponential notation,and then,if your system supports it, p notation.
Have the output use the following format (the actual number of digits displayed for the 
exponent depends on the system.)

Enter a floating-point value: 64.25
fixed-point notation: 64.250000
exponential notation: 6.425000e+01
p notation: 0x1.01p+6

1_read in floting_point number
2_print in decimal_point notation
3_exponential notation
4_p notation
*/

#include<stdio.h>
int main(void)
{
    float number;

    printf("Enter a floating-point value: ");
    scanf("%f",&number);

    printf("fixed-point notation: %f\n",number);
    printf("exponential notation: %e\n",number);
    printf("p notation: %a\n",number);

    return 0;
}
   
    
