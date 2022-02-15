#include <stdio.h>

/*
 *结构体数组
 * */

struct pay_rec{
	long id;
	char name[20];
	float pay;
};

int main(){
	int i;
	struct pay_rec employee[5]={
		{1,"李小龙",655.1},
		{2,"李小龙2",655.1},
		{3,"李小龙3",655.1},
		{4,"李小龙4",655.1},
		{5,"李小龙5",655.1}
	};
	for (i=0;i<5;++i)
		printf("%-20ld%-20s%-20.2f\n",
				employee[i].id, employee[i].name, employee[i].pay);
	return 0;
}
