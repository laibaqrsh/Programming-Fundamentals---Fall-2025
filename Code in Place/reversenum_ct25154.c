//Reverse a number (e.g., 1234 ? 4321) using while loop.
#include<stdio.h>
int main()
{
	int n, remainder;
	int reversed = 0;
	
	printf("Enter Number: ");
	scanf("%d",&n);
	while(n != 0)
	{
		remainder = n % 10;
		reversed = reversed*10+remainder;
		n = n/10;
	}
	printf("Reversed number = %d", reversed);
	
}