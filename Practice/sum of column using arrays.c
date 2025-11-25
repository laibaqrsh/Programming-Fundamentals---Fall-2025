//sum of column
#include<stdio.h>
int main()
{
	int r,c;
	printf("Enter row: ");
	scanf("%d", &r);
	printf("Enter column: ");
	scanf("%d", &c);
		
	int arr[r][c];
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("Enter value for (%d,%d): ", i,j);
			scanf("%d", &arr[i][j]);
		}
	}
	for (int j = 0; j < r; j++)
	{
		int sum = 0;
		for (int i = 0; i < c; i++)
		{
			sum += arr[i][j]; //0,0 nd 1,0 bc i & j positions changed in loop
		}
		printf("Sum of column %d: %d\n", j+1, sum);
	}
}