/*Write a program thats converts yours age in years to days and displays both values. 
At this point ,don't worry about fractional years and leap years.*/

#include<stdio.h>
int main()
{
    int age_in_years;
    int age_in_days;

    age_in_years = 20;
    age_in_days = age_in_years * 365;

    printf("My age in years is %d .So my age in days is %d",age_in_years,age_in_days);

    return 0;

}