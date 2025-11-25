//count even odd no.
#include<stdio.h>
int main()
{
	int arr[5];
	printf("Enter 5 numbers:\n");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	int even_count = 0;
	for (int j = 0; j < 5; j++)
	{
		if (arr[j] % 2 == 0)
		{
			even_count++;
		}
	}
	int odd_count = 0;
	for (int j = 0; j < 5; j++)
	{
		if (arr[j] % 2 != 0)
		{
			odd_count++;
		}
	}	
	printf("Even numbers: %d\n", even_count);
	printf("Odd numbers: %d\n", odd_count);
	
}