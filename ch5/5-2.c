#include <stdio.h>

//辗转相除法(欧几里得算法)求最大公约数

int main(){
	int m,n,tmp,r;
	printf("请输入两个正整数m,n：\n");
	scanf("%d,%d",&m,&n);
	if(m<n){
		tmp=m;
		m=n;
		n=tmp;
	}
/*	
 *	r=m%n;    	//先判断，后执行
	while(r!=0){
		m=n;
		n=r;
		r=m%n;
	}
*/

	while((r=m%n)!=0){
		m=n;
		n=r;
	}
	
	printf("m、n的最大公约数为：%d\n",n);
	return 0;
	
}
