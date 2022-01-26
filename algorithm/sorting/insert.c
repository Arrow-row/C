#include <stdio.h>

//插入排序 从小到大排列数组元素

void insert(int arr[],int n){

	int key=arr[n];
	int i=n;
	while (arr[i-1]>key){
		arr[i]=arr[i-1];
		i--;
		if (i==0)	//i移动到数组左边界时，跳出while循环，执行arr[i]=key;
			break;
	}
	arr[i]=key;
}

void insertionSort(int arr[],int n){	//将arr的前n个元素做插入排序

	int i;
	for (i=1;i<n;i++){	//i=1表示从arr的第2个元素开始插入排序，对应数组下标是1，i最大可取n-1，就是数组最后一个元素
		insert(arr,i);
	}
} 

int main(){
	int arr[]={9,1,2,3,4,5,5,6,8};
	int i;
	insertionSort(arr,9);

	for (i=0;i<9;i++)
		printf("%d\n",arr[i] );
	return 0;
}