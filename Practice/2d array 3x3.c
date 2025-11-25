//2x2 matrix
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
			printf("Enter value for (%d,%d): ", i,j);
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}