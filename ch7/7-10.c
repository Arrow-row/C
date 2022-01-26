#include <stdio.h>

int larger(int x,int y){

	// int flag;
	if (x>y)
		return 1;
	else if (x<y)
		return -1;
	else 
		return 0;
}

int main(){

	int a[10],b[10],i,n=0,m=0,k=0;	//n：a[i]>b[i]	m：a[i]<b[i]  k:a[i]=b[i]

	printf("enter array a:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("\n");

	printf("enter array b:\n");
	for(i=0;i<10;i++)
		scanf("%d",&b[i]);
	printf("\n");

	for(i=0;i<10;i++){

		if (larger(a[i],b[i])==1)
			n++;
		else if (larger(a[i],b[i])==-1)
			m++;

	}

	if (n>m)
		printf("array a > array b,n=%d,m=%d,k=%d\n",n,m,10-n-m);
	else if (n<m)
		printf("array a < array b,n=%d,m=%d,k=%d\n",n,m,10-n-m);
	else 
		printf("array a = array b,n=%d,m=%d,k=%d\n",n,m,10-n-m);
}