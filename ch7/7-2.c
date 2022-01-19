#include <stdio.h>

int main()
{

	int a,b,res;
	int max(int,int);
	printf("input a,b=");
	scanf("111%d%d",&a,&b);
	res=max(a,b);
	printf("max=%d\n",res);
	return 0;
}

int max(int x,int y)
{
	if (x>y)
		return x;
	else 
		return y;
}