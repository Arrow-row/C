#include <stdio.h>

int main()
{
	void print_dollarmark();
	void print_message();
	
	print_dollarmark();
	print_message();
	print_dollarmark();

	return 0;

}

void print_dollarmark()
{

	printf("\n$$$$$$");
}

void print_message()
{

	printf("\n  hello!   ");
}