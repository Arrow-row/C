#include <stdio.h>

/*
Fibonacci   1 1 2 3 5 8 13 21 34 ...

f(n)=f(n-1)+f(n-2)
f(1)=1
f(2)=1

所有循环都可以写成递归式: 递归关系+递归出口

*/

int f(int n){
	if (n==1){
		return 1;
	}
	else if (n==2){
		return 1;
	}
	else {
		return f(n-1)+f(n-2);
	}
}

int main(){
	int num=f(8);
	printf("num= %d",num);

}
