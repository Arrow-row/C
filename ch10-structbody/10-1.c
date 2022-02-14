#include <stdio.h>

/*
 *结构体声明
 * 
 */

int main(){
	struct date{
		int year;
		int month;
		int day;
	};
	struct date mybirth;
	mybirth.month = 12;
	mybirth.day = 12;
	mybirth.year = 1996;
	printf("my birthday is %d/%d/%d",
		mybirth.month,mybirth.day,mybirth.year);
	return 0;


/*结构体申明的三种格式
 *	1.先声明结构体类型，再声明对应结构体变量，如10-1.c所示
 *	2.声明结构体类型同时声明变量
 *	struct date{
 *		int month;
 *		int day;
 *		int year;
 *	} mybirth;
 *	3.省略结构体名
 *	struct {
 *		int month;
 *		int day;
 *		int year;
 *	} mybirth;
 * 
 */

}
