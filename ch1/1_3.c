#include <stdio.h>
int main()
{
	int a,b,sum;
		int add(int x,int y);
		a=10;
		b=3;
		sum=add(a,b);
		printf("sum=%d\n", sum);
	return 0;


}

int add(int x,int y)
{
	return x+y;
}