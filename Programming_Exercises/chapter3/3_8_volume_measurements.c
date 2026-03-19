/*
In the U.S.system of vplume measurements,a pint is 2 cups,a cup is 8 ounces,an
ounce is 3 tablespoons,and a tablespoon is 3 teaspoons.Write a program that  requests a
volume in cups and that displays the equivalent volumes in pints,ounces,tablespoons,
and teaspoons.Why does a floting-point type make more sense for this application than
an integer type.
*/

/*
a pint       = 2 cups
a cup        = 8 ounces
an ounce     = 3 tablespoons
a tablespoon = 3 teaspoons
*/

/*
request a volume in cups
displays the equivalent volumes in pints,ounces,tablespoons,and teaspoons.
*/

#include<stdio.h>

static const double CUP_TO_PINT = 1.0/2.0;
static const double CUP_TO_OUNCE = 8.0;
static const double OUNCE_TO_TABLESPOON = 3.0;
static const double TABLESPOON_TO_TEASPOON = 3.0;

double get_valid_input(const char* prompt);
void clear_input_buffer(void);

int main(void)
{
    // 统一声明变量（兼容C89）
    double cups;

    // 获取输入
    cups = get_valid_input("Please enter a positive volume in cups: ");

    // 转换计算
    double pints = cups * CUP_TO_PINT;
    double ounces = cups * CUP_TO_OUNCE;
    double tablespoons = ounces * OUNCE_TO_TABLESPOON;  // 盎司→汤匙
    double teaspoons = tablespoons * TABLESPOON_TO_TEASPOON;  // 汤匙→茶匙

    // 打印结果
    printf("\n=== Volume Conversion Results ===\n");
    printf("Equivalent volume in pints:       %.2f\n", pints);
    printf("Equivalent volume in ounces:      %.2f\n", ounces);
    printf("Equivalent volume in tablespoons: %.2f\n", tablespoons);
    printf("Equivalent volume in teaspoons:   %.2f\n", teaspoons);

    return 0;
}

// 清空输入缓冲区（处理EOF）
void clear_input_buffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// 获取合法的正数输入
double get_valid_input(const char* prompt)
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
           // 校验是否为正数
            if (input <= 0 || input > 1e20)// 增加数值范围限制
            {
                printf("Error：Volume must be a positive number (0 < value < 1e20)!\n");
                clear_input_buffer();
                continue;
            }
           clear_input_buffer();
            break;
        }

        // 情况2：输入非法 ——>提示错误，重新循环
        printf("Error：Invalid input! Please enter a number.\n");
        clear_input_buffer();
        
    }

    return input;
}