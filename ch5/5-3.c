#include <stdio.h>

//do-while语句：无论循环开始时表达式值为真/假，循环体都会被执行一次

int main(){
	int n=1;
	long s=1;
	do{
		s*=n;
		n++;
	}while(n<=10);	//do-while中，这里的分号不能缺少
	printf("%d!=%d\n",n-1,s);
	return 0;
}


