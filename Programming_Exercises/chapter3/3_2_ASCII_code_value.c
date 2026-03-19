/* 
Write a program that asks you to enter an ASCII code value,
such as 66,and then prints the character having that ASCII code.
*/

#include<stdio.h>
int main(void)
{
    int code_value;
    int input_result; // 接收scanf的返回值，判断输入是否成功

    printf("Please enter an ASCII code value (0 ~ 127):");
    // 读取输入，并判断是否为有效整数
    input_result = scanf("%d", &code_value);    // user input code_value

    // 校验1：输入是否为有效整数
    if (input_result != 1)
    {
        printf("Error: Please enter a valid integer!\n");
        // 清空输入缓冲区，避免后续循环受影响
        while (getchar() != '\n');
        return 1; // 非0返回值表示程序异常退出
    }

    // 校验2：是否在ASCII有效范围
    if (code_value < 0 || code_value > 127)
    {
        printf("Error: ASCII code must be between 0 and 127!\n");
        return 1;
    }

    printf("The code value for %d is %c.\n", code_value, code_value); 

    return 0;

}