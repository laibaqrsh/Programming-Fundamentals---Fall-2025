// factorial using for loop
#include<stdio.h>

int main()
{
	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	
	int factorial = 1;
	
	if (num > 0)
	{
		for (int i = 1; i <= num; i++)
		{
			factorial *= i; // 4*3*2*1 = 24
		}
		printf("Factorial of %d is: %d", num,factorial);
	}
	else printf("Enter positive number.");
}