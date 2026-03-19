/*
Find out what your system does with interger overflower,floating_point overflower,
and floating_point underflower by using experimental approach;that is,write programs
having these problems,(You can check the discussion in Chapter 4 of limits.h and 
float.h to get guidance on the largest and smallest values.)
*/

#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(void)
{
    printf("Maximum int value on this system = %d\n",INT_MAX);
    printf("Minimum int value on this system = %d\n",INT_MIN);

    printf("Maximum normal flot value on this system = %e\n",FLT_MAX);
    printf("Minimum normal flot value on this system = %e\n",FLT_MIN);

    /*
    Here is the outputs of 4 ptintf()s I just writted:
    Maximum int value on this system = 2147483647
    Minimum int value on this system = -2147483648
    Maximum normal flot value on this system = 3.402823e+38
    Minimum normal flot value on this system = 1.175494e-38

    So I have got the MAX and MIN value of int and normal flot.
    So what is overflow and underflower.
    */

   int biggest_int,smallest_int,Too_big_int,Too_small_int;
   float bidggest_float,smallest_float,Too_big_float,Too_small_float;

    biggest_int     = INT_MAX;
    smallest_int    = INT_MIN;
    bidggest_float   = FLT_MAX;
    smallest_float  = FLT_MIN;

    Too_big_int     = biggest_int + 1;
    Too_small_int   = smallest_int - 1;
    //Too_big_float   = bidggest_float + 1; //1 is too small to make the value overflow
    Too_big_float   = bidggest_float * 2;
    Too_small_float = smallest_float / 2;
    /*
    Too_small_float = smallest_float - 1; 
    that option can't make the value underflow
    */

    printf("\n");

    printf("what happened to Too_big_int: %d \n",Too_big_int);
    printf("what happened to Too_small_int: %d \n",Too_small_int);
    printf("what happened to Too_big_float: %e \n",Too_big_float);
    printf("what happened to Too_small_float: %e \n",Too_small_float);
    
    /*
    That is the outputs of the printf()s I just written:

    what happened to Too_big_int: -2147483648
    what happened to Too_small_int: 2147483647 
    what happened to Too_big_float: 3.402823e+38
    what happened to Too_small_float: -1.000000e+00 //This is not underflow
    
    // 注意：有符号整数溢出是C标准的未定义行为，此处仅测试当前系统表现

    I have a question why  compare whith the other 
    value like Too_big_int the value of Too_big_float 
    doesn't have any change when biggest_float+1 
    That is compare with biggest_float 1 is too small.
    */

    /*
    That is the correct output:
    what happened to Too_big_int: -2147483648 
    what happened to Too_small_int: 2147483647
    what happened to Too_big_float: inf(无穷大)
    what happened to Too_small_float: 5.877472e-39（非规格化数，精度丢失）
    
    You can also use the another way to make the value of smallest_float underflow like 
    this:
    float Too_small_float = 1e-40; // 1e-40 < FLT_MIN(1.175e-38)
    printf("测试下溢（1e-40）: %e\n", Too_small_float);
    */

    return 0;
}