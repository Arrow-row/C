#include <stdio.h>

//选择排序：将数组中的10个整数从小到大排序（减少反复赋值操作）

int main(int argc, char const *argv[])
{
	int a[5];
	int i,j,k,min,temp;
	printf("请输入5个整数：\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("\n");
	for(i=0;i<4;i++){	//找剩下n-i+1里面最小值，找到后放在a[i]
		min=i;
		for(j=i+1;j<5;j++){
			if (a[j]<a[min])	// <表示从小到大排序，>表示从大到小
				min=j;	//min是每次找到的n-i+1个数里面最小值的下标
		}
		if (min!=i){	//要交换a[min]和a[i]，最终目的是将最小值放在a[i]
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
		printf("第%d趟排序结果：",i+1 );
		for ( k = 0; k < 5; k++)
			printf("%2d",a[k]);
		printf("\n");
	}

	return 0;
		
}