# include <stdio.h>


/************* 求数组前n项中的最大值 *******/
int maxarr(int arr[],int n){
	if(n==0)							//递归出口
		return arr[0];					
	else if (maxarr(arr,n-1)>arr[n])	//递归关系
		return maxarr(arr,n-1);
	else
		return arr[n];
}

/************* sum=1+2+3+...+100 *******/
int sum(int n){
	if (n==1){
		return 1;
	}
	else
		return sum(n-1)+n;
}

/************ 求数组前n项和 *************
sum(arr,n)=sum(arr,n-1)+arr[n] (递归关系)
sum(arr,0)=arr[0] (出口)
****************************************/
int arrsum(int arr[],int n){
	if(n==0)
		return arr[0];
	else
		return arrsum(arr,n-1)+arr[n];
}



int main(){
	int s = sum(100);
	printf("sum = %d\n",s);

	int arr[9]={1,0,7,6,5,4,3,2,1};
	int as=arrsum(arr,8);
	printf("arrsum = %d\n",as);

	int xa=maxarr(arr,8);
	printf("maxarr = %d\n",xa);
}
