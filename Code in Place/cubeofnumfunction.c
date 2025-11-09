// function for swapping using pointers
#include<stdio.h>

void swap(int *a, int  *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int x = 10;
	int y = 20;
	
	printf("Before swap:\nx = %d, y = %d\n",x,y);
	swap(&x,&y); // calling swap function
	printf("After swap:\nx = %d, y = %d\n", x,y);
	return 0;
}
