#include <stdio.h>

/* 
1、字符型数据在内存中实际存放的是其ASCII码值，C程序中，字符型数据可以当作整型数据处理，允许对整型变量赋予字符值，或对字符型变量赋予整型值
2、字符串常量与字符常量不同，不能将字符串常量赋予字符变量
3、C中，字符串常量占据连续存储空间，字符串结尾处必须有'\0'作为字符串结束标志
（在 C 语言中，字符串实际上是使用空字符 \0 结尾的一维字符数组）
*/

int main(int argc, char const *argv[])
{
	short int num1,num2;
	char ch1,ch2;
	ch1='A';
	num1=ch1+32;
	num2=321;
	ch2=num2;
	printf("num1=%hd,num2=%hd,ch1=%hd,ch2=%hd\n",num1,num2,ch1,ch2 );  // %hd 表示输出短整型
	printf("num1=%c,num2=%c,ch1=%c,ch2=%c\n",num1,num2,ch1,ch2 );
	return 0;
}