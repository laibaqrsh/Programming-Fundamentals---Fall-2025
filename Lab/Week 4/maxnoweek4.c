// max of 2 numbers using ladder if else
#include<stdio.h>
int main()
{
	int num1, num2;
	printf("Enter Number 1: ");
	scanf("%d",&num1);
	printf("Enter Number 2: ");
	scanf("%d",&num2);
	
	if (num1 != num2)
	{
		printf("Number 1 is not equal to Number 2.");
	}
	else if (num1 > num2)
	{
		printf("Number 1 is maximum.");
	}
	else if (num2 > num1)
	{
		printf("Number 2 is maximum.");
	}
	else
	{
		printf("Both numbers are equal.");
	}
}