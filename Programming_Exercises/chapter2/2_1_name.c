/*
Write a program that uses one printf() call to print your first name and last name on
one line ,uses a second printf() call to print your first and last names on two separate lines,
and uses a pair of printf() calls to print your first and last names on one line.
The output should look like this (but using your name):
Gustav Mahler <- First print statement
Gustav        <- Second print statement
Mahler        <- Still the second print statement
Gustsv Mahler <- Third and fourth print statements
*/

#include<stdio.h>
int main()
{
	char first_name[] = "bo";
    char last_name[]  = "xu";
    //也可以写成下面的样子
	//第一步：先定义字符数组（要预留足够的空间存储字符串） 
	//数组大小至少要比字符串长度多1（因为字符串末尾有隐藏的'\0' 结束符）
	
	//char first_name[10];  //定义长度为10的字符串数组，足够存"bo"
	//char last_name[10];
	
	//第二步；用 strcpy()赋值字符串（不能直接写 first_name = "bo"）
	//strcpy(first_name, "bo");
	//strcpy(last_name,  "xu");
	 
	
	printf("%s %s\n",first_name,last_name);
	printf("%s\n%s\n",first_name,last_name);
	printf("%s ",first_name);
	printf("%s",last_name);
	
	return 0 ;
}

/*
1.字符vs字符串；
 
  字符(char)：用单引号' '包裹，如'A'，代表单个字母或符号，占用1个字节。 
  字符串(string)：用双引号" "包裹，如"Hello",本质上是一个以'\o'（空字符）结尾的字符数组。

2.printf格式符： 
  %c： 用于打印单个字符。
  %s： 用于打印以'\0'结尾的字符串。 
  %d： 用于打印十进制整数。如果用 %d 来打印字符变量，这会导致输出的是字符的ASCII码值，而不是字符本身。 
*/
   
   
