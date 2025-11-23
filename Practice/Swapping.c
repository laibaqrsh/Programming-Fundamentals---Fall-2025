// take 2 inputs and swap values
#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Before swapping:\na = %d\nb = %d\n", a,b);
	
	int temp;
	temp = a;
	a = b;
	b = temp;
	
	printf("After swapping:\na = %d\nb = %d", a,b);
		
}