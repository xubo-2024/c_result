/*
There are 2.54 centimeters to the inch.Write a program that asks you to enter your 
height in inchs and then displays your height in centimeters. 
Or,if you prefer, ask for the height in centimeters and convert that to inches.
*/

#include<stdio.h>
int main(void)
{
    const double inch_to_cm = 2.54;
    
    double inch;
    double cm;

    printf("Please enter your height in cm:");
    scanf("%lf",&cm);
    inch = cm / inch_to_cm;
    printf("Your height in inch is %.2f \n",inch);

    printf("Please enter your height in inchs:");
    scanf("%lf",&inch);
    cm = inch * inch_to_cm;
    printf("Your height in cm is %.2f \n",cm);

    return 0;

}