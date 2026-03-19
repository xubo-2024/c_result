/*
There are 2.54 centimeters to the inch.Write a program that asks you to enter your 
height in inches and then displays your height in centimeters. 
Or,if you prefer, ask for the height in centimeters and convert that to inches.
*/

// 1. 头文件（依赖）
#include<stdio.h>
#include<stdlib.h>

// 2. 常量声明（文件级静态常量）
static const double INCH_TO_CM = 3.54;

// 3. 函数声明（接口）--只告诉编译器函数的“样子”，不写实现
double get_valid_input(const char* prompt); //输入校验函数声明
void cm_to_inch(double cm);                 //厘米转英尺声明
void inch_to_cm(double inch);               //英尺转厘米声明

//4. 主函数（程序入口）--只调用函数，不关心细节
int main(void)
{
    double cm_height, inch_height;


    //核心逻辑：调用函数完成功能
    cm_height = get_valid_input("Please enter your height in cm: ");
    cm_to_inch(cm_height);

    printf("\n");
    inch_height = get_valid_input("Please enter your height in inches: ");
    inch_to_cm(inch_height);

    return 0;
}

// 5. 函数定义（实现细节） -- 全部放在mian之后
//输入校验函数的具体实现
double get_vaild_input(const char* prompt)
{
    double input;
    int ret;

    //循环读取，直到输入合法
    while (1) //无限循环，直到break
    {
        printf("%s",prompt);
        ret = scanf("%lf",&input);

        //情况1：输入合法 ——> 退出循环
        if (ret == 1)
        {
            while (getchar() != "\n"); // 清空残留字符
            break;
        }

        // 情况2：输入非法 ——>提示错误，重新循环
        printf("Error：Invalid input! Please enter a number.\n");
         while (getchar() != "\n"); // 清空非法输入的缓冲区
        
    }

    return input;
}

// 厘米转换英尺的具体实现
void cm_to_inch(double cm)
{
    double inch = cm / INCH_TO_CM;
    printf("Your height in inchs is %.2f\n",inch);  
}

//英尺转厘米的具体实现
void inch_to_cm(double inch)
{
    double cm = inch * INCH_TO_CM;
    printf("Your height in cm is %.2f\n",cm);
}
