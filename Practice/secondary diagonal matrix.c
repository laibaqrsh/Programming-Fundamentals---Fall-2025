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
	printf("Secondary Diagonal Matrix:\n");
	for (int i = 0; i < r; i++)
	{
		int j = c - 1 - i; //2,0,1
		printf("%d ", arr[i][j]);
	}
}