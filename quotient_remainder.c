#include<stdio.h>
int main()
{
	int dividend=4;
	int divisor=2;
	int quotient;
	int remainder;
	quotient=dividend/divisor;
	remainder=dividend%divisor;
	printf("The quotient is %d\n",quotient);
	printf("The remainder is %d\n",remainder);
}
