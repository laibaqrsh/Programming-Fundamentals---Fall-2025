//average of an array
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
	
	float avg = sum / 5;
	printf("Average of all elements is: %.2f", avg);
}