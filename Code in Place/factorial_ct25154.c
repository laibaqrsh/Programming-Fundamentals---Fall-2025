// Find the factorial of a number using a for loop.

#include<stdio.h>
int main()
{
	int num;
	float factorial = 1;
	
	printf("Enter Number: ");
	scanf("%d", &num);
	
	if (num<0)
	{
		printf("Enter a positive number.");
	}
	else 
	{
		for (int i = 1; i<=num; i++)
		{
			factorial *= i;
		}
		printf("Factorial of the %d = %.2f", num , factorial);
	}
	
}