/*
There are approximately 3.156 × 10⁷ seconds in a year.Write a program that requests
your age in years and then displays the equivalent number of seconds.
*/

#include<stdio.h>
int main(void)
{
    double age_in_year;
    const double years_to_seconds = 3.156e7;

    printf("please enter your age in years: ");
    scanf("%lf",&age_in_year);

    double age_in_second = age_in_year * years_to_seconds;

    printf("You age in second is %.0lf",age_in_second);

    return 0;
}
