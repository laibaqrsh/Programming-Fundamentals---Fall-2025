//print diagonal matrix
#include<stdio.h>
int main()
{
	int r = 3;
	int c = 3;
	int arr[r][c];
	
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("Enter (%d,%d): ", i,j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("Diagonal Matrix:\n");
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i == j)
			{
				printf("%d ", arr[i][j]);
			}
		}
	}
}