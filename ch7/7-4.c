#include <stdio.h>

int main()
{
	int x,res;
	int even(int);
	printf("input an integer(1~100):\n");
	scanf("%d",&x);
	res=even(x);
	if (res==1)
		printf("%d is an odd number\n",x);
	else
		printf("%d is an even number\n",x);
}

int even(int a)
{

	if (a%2==0)
		return 0;
	else 
		return 1;
}