/* showf_pt.c -- displays float value in two way */

#include<stdio.h>

int main(void)
{
    float about = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be writtten %e\n",about,about);

    //nest line requires C99 or later compliance 
    printf("And it's %a in hexadecimal, powers of 2 notation\n",about);

    printf("%f can be written %e\n",abet,abet);
    printf("%Lf can be written %Le\n",dip,dip);

    return 0;
}

/*

This is the output, provided your compiler is C99/C11 compliant 

32000.000000 can be writtten 3.200000e+04
And it's 0x1.f4p+14 in hexadecimal, powers of 2 notation
2140000000.000000 can be written 2.140000e+09
0.000053 can be written 5.320000e-05

*/