#include <stdio.h>

/*
冒泡排序：将数组中的6个整数从小到大排序
（冒泡排序需要多次进行变量赋值操作，效率较低）
*/
int main(int argc, char const *argv[])
{
	int a[7];
	int i,j,temp;
	typedef enum{
		true=1,false=0
	}bool;
	bool flag;

	printf("input 6 integers:\n");

	for (i=1;i<7;i++)
		scanf("%d",&a[i]);		//数组的第一个元素a[0]未使用
	printf("\n");
	for (j=1;j<6;j++){			//实现5趟比较
		flag=false;
		for (i=1;i<=6-j;i++)	//在每一趟中进行6-j次两两比较，从前往后，是逆序则交换
			if(a[i]>a[i+1]){
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				flag=true;
			}
		if (flag==false)
			break;
		printf("第%d趟排序结果\n", j);
		for (i=1;i<7;i++)
			printf("%2d",a[i]);
		printf("\n");
		
	}
	printf("the sorted integers: \n");
	for (i=1;i<7;i++)
		printf("%2d",a[i]);
	printf("\n");
	return 0;
			
}

