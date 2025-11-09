// bubble sort in ascending order
#include<stdio.h>

int main()
{
	int arr[5] = {5,4,3,2,1};
	int i,j,temp;
	int n = 5;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("Sorted Array: ");
	for (i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}