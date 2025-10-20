// Multiplication Table (1 to 5 tables)
#include<stdio.h>
int main()
{
	int i=1;
	int j;
	while (i<=5)
	{
		j=1;
		printf("Multiplication table of %d\n",i);
		while (j<=10)
		{
			printf("%d x %d = %d\n", i, j, i*j);
			j++;
		}
		i++;
	}
}