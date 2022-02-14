#include <stdio.h>
/*结构体声明与变量成员使用
 *
 * 将date结构体声明为全局的
 */

struct date{
	int month;
	int day;
	int year;
};

struct person{
	char name[10];
	struct date mybirth;
};

int main(){
	//struct date mybirth={12,12,1996};	//初始值之间逗号分隔，初始换数值列表顺序与结构体类型声明中成员顺序一致
	struct person myperson={"Arrow",{12,12,1996}};
	printf("Arrow's birthday is %d/%d/%d\n",
			myperson.mybirth.month,myperson.mybirth.day,myperson.mybirth.year);	//访问结构体变量内另一个结构体变量时，要引用到最低一级成员
	printf("the second letter in \"Arrow\" is %c\nthe first letter is %c",
			myperson.name[1],myperson.name[0]);	//访问结构体变量中数组成员元素形式： 结构体变量名.数组名[下标]
	return 0;
}
