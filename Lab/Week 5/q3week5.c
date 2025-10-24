// find maximum of 2 numbers using nested if else
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter Number 1: ");
	scanf("%d", &num1);
	printf("Enter Number 2: ");
	scanf("%d", &num2);
	
	if (num1!=num2)
	{
		if (num1>num2)
		{
			printf("Number 1 is maximum.");
		}
		else printf("Number 2 is maximum.");
	}
	else printf("Number 1 and 2 are equal.");
}