#include<stdio.h>
int main()
{
	int first=2;
	int second=3;
	int temp;
	temp=first;
	first=second;
	second=temp;
	printf("First number after swap is %d",first);
	printf("second number after swap is %d",second);
	
}
