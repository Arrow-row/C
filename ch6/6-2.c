#include <stdio.h>

//用一维数组计算并输出 Fibonacci 数列的前20项

int main(int argc, char const *argv[])
{
	int i,f[20]={1,1};

	for(i=2;i<20;i++)
		f[i]=f[i-2]+f[i-1];
	
	for(i=0;i<20;i++){

		printf("%8d",f[i] );
		if((i+1)%5==0)
			printf("\n");	//控制换行，每行输出5个元素
	}

	return 0;
	
}