/*print1.c-displays some properties of printf() */

#include <stdio.h>

int main(void)
{
    int ten = 10;
    int two = 2;

    printf("doing it right: ");
    printf("%d minus %d is %d.\n", ten, two, ten - two);

    printf("doing it wrong: ");
    printf("%d minus %d is %d.\n", ten );  // forgot 2 arguments

    return 0 ;
    
}