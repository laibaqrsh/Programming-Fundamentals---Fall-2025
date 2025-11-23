//pattern printing
#include<stdio.h>

int main()
{
	int row;
	printf("Enter number of rows: ");
	scanf("%d", &row);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	for (int i = row ; i > 0; i--)
	{
		for (int j = i ; j > 0; j--)
		{
			printf("*\t");
		}
		printf("\n");
	}
}