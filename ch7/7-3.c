#include <stdio.h>

void resval(double r1,double r2,double rp,double rs)
{
	rp=(r1*r2)/(r1+r2);
	rs=r1+r2;

}

int main()
{

	double r1=5,r2=4,rp=0,rs=1;
	void resval(r1,r2,rp,rs);
	printf("the value of parallel resistor is:%.2f\n", rp);
	printf("the value of series resistor is:%.2f\n",rs);
	return 0;
}

