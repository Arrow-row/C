#include <stdio.h>

int main(){
						//先声明后使用
	int i,a[10];		//一维数组声明： 类型说明符 数组名[常量表达式]
	for (i=0;i<=9;i++)
		a[i]=i;			//一维数组引用： 数组名[下标]
						//不能整体引用数组，只能对数组元素进行操作，错误用法：a[5]={1,2,3,4,5};
	for (i=9;i>=0;i--)
		printf("%d\n",a[i] );
	printf("\n");
	return 0;
}