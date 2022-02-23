#include <stdio.h>

int main(){
	int sum=0,i=0;
	while(i<=100){
		sum+=i;
		i++;
	}
	printf("1+2+3...+100=%d",sum);
	return 0;
}
