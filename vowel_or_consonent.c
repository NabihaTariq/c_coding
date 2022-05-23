#include<stdio.h>
int main()
{
	char alphabet;
    printf("Enter the alphabet:");
    scanf("%c", &alphabet);
    printf("The alphabet is %c",alphabet);
	if(alphabet=='a'|| alphabet=='e' || alphabet=='i'|| alphabet=='o' || alphabet=='u')
	{
		printf("\nThe alphabet is vowel");
	}
	else 
	{
		printf("\nThe alphabet is consonent");
	}
	
	return 0;
}
