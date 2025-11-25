//find sum of all elements of an array
#include<stdio.h>

int main()
{
	int arr[5];
	printf("Enter 5 numbers:\n");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	int sum = 0;
	for(int j = 0; j < 5; j++)
	{
		sum += arr[j];	
	}
	printf("Sum of all elements is: %d", sum);

}