/*
Many studies suggest that smiling has benefits.
Write a program that produces the following output:

Smile!Smile!Smile!
Smile!Smile!
Smile!

Have the program define a function that displays the string Smile! once,
and have the program use the function as often as needed.

*/

#include<stdio.h>

void Smile(void);

int main()
{
    Smile();
    Smile();
    Smile();
    printf("\n");

    Smile();
    Smile();
    printf("\n");

    Smile();
    printf("\n");

    return 0;

}

void Smile(void)
{
    printf("Smile!");
}
