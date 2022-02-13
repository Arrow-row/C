#include <stdio.h>


//指针变量作为函数参数，实现实参值的同步更新（地址传递）

void swap(int *p1, int *p2){	//通过改变形参、实参所指向的变量的值来使主函数中变量的值发生改变
	int t=*p1;
	*p1=*p2;
	*p2=t;
}


int main(){
	int i,j;
	int *pi=&i,*pj=&j;
	printf("请输入i,j");
	scanf("%d,%d",&i,&j);
	//printf("i=%d,j=%d",i,j);
	if (i<j)
		swap(pi,pj);
	printf("i=%d,j=%d",i,j);
	return 0;
}



//如下函数是实现形参p1、p2值的互换，其所指向的单元的内容并未改变

void swap(int *p1,int *p2){
	int *p;
	p=p1;
	p1=p2;
	p2=p;
}

