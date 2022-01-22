#include <stdio.h>

void hanoi(int n,char A,char B,char C){
	if (n==1){

		printf("%c -> %c\n",A,C );
	}
	else{

		hanoi(n-1,A,C,B);			//A上n-1个盘子，绕过C，全部移到B上（不包括A最底下最大的那个）
									//执行完后，A上有一个盘子(最大的那一个)，B上n-1个盘子，C上0个盘子
		printf("%c -> %c\n",A,C );	//将A上的最大的那个盘子移到C（只是打印出这个步骤，其实没有去操作移动它，因为它最大，也不会影响后续将A作为辅助柱子）
		hanoi(n-1,B,A,C);			//B上n-1个盘子，绕过A，全部移到C上（包括B最底下最大的那个）
	}

}

int main(){

	hanoi(3,'A','B','C');
}