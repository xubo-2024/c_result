/* platinum.c -- your weght in platinum */
#include<stdio.h>
int main()
{
    float weight; /* user weight         */
    float value;  /* platinum equivalent */

    printf("Are you worth your weight in platinum\n");
    printf("Let't check it out,\n");
    printf("Please enter your weight in pounds: ");

    /* get input from the user           */
    scanf_s("%f",&weight);
    /* assume platinum is $1700  per ounces troy */
    /* 14.5833 converts pouds avd. to ounces tory */
    value = 1700.0 * weight * 14.5833;

    printf("Your weight in platinum is worth $%.2f.\n",value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");
    
    return 0;
}