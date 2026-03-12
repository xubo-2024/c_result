/*
Write a program that creates an integer variable called toes.
Have the program set program set toes to 10. 
ALso have program calculate what twice toes is and what ties spuared is.
The program should print all three values,identifying them. 
*/

#include<stdio.h>
int main(void)
{
    int toes;
    toes = 10;

    printf("Toes is %d \n",toes);
    printf("Twice toes is %d \n",2*toes);
    printf("Toes spuared is %d \n",toes*toes);

    return 0;
}