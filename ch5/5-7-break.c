#include <stdio.h>

/* break; 语句用法

1、结束当前循环，跳到循环体外面，向下继续执行循环结构后面的语句
2、若用在多层循环中，仅能跳出当前层循环
3、可用于 switch-case/while/for/do-while 循环结构

*/

int main(){

	int x ,sum=0;
	printf("请输入数据x:\n");
	do{

		scanf("%d",&x);
		sum+=x;
		if (sum>100)	//输入数据之和大于100，就跳出循环，执行后面的 printf
			break;
	} while(1);
	printf("输入的数据值和是：%d\n",sum );
	return 0;

}
