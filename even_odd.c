#include<stdio.h>
int main()
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	printf("The value of a is %d", a);
	if(a%2==0)
	{
		printf("\nThe number is even");
	}
	else
	printf("\nthe number is odd");
}
