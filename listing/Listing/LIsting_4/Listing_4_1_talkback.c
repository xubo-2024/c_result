// talkback.c -- nosy, informative program
#include<stdio.h>
#include<string.h>      // for strlen() prototype
#define DENSITY 62.4    //human density in lbs per cu ft
int main()
{
    float weight, volume;
    int size, letters;
    char name[40];      // name is an array of 40 chars

    printf("Hi! What's your first name?\n");
    scanf("%s",name);
    printf("%s, what's your weight in pounds?\n",name);
    scanf("%f",&weight);

    size = sizeof name;
    letters = strlen(name);
    volume = weight / DENSITY;

    printf("Well, %s, your volume is %2.2f cubic feet.\n",name, volume);

    printf("Also, Your first name has %d  letters,\n",letters);

    printf("and we have %d bytes to store it.\n",size);

    return 0;
}


/*

Running talkback.c produces results such as the following:

Hi! What's your first name?
bo
bo, what's your weight in pounds?
176
Well, bo, your volume is 2.82 cubic feet.
Also, Your first name has 2  letters,
and we have 40 bytes to store it.

*/