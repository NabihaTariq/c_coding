#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a:");
//	scanf("%d",&a);
	printf("\nEnter the value of b:");
//	scanf("%d",&b);
	printf("\nEnter the value of c:");
	
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	printf("\nthe value of a is %d",a);
	printf("\nthe value of b is %d",b);
	printf("\nthe value of c is %d",c);
	
	if(a>b && a>c)
	{
	//	if(a>c)
	//	{
			printf("\na is greater than b and c");
	//	}
	}
	else if(b>a && b>c)
	{
	//	if(b>c)
	//	{
			printf("\nb is greater than a and c");
	//	}
	}
	else if(c>b && c>a)
	{
		//if(c>a)
		//{
			printf("\nc is greater than a and b");
		//}
	}
	else
	printf("\na is eqaul to %d and b is equal to %d and c is equal to %d",a,b,c);
}
