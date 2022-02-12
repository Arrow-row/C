#include <stdio.h>

//输入两个整数分别给i、j，按先大后小顺序输出i、j

int main(){
	int i,j,*p1=&i,*p2=&j;
	scanf("%d,%d",&i,&j);
	if(i<j){
		p1=&j;
		p2=&i;
	}
	printf("i=%d,j=%d\n",i,j);
	printf("max=%d,min=%d\n",*p1,*p2);
	return 0;
}
