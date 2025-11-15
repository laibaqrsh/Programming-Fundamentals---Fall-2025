#include<stdio.h>

int add(int x, int y)
{
	int sum = x + y;
}
int main()
{
	int x,y;
	
	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter y: ");
	scanf("%d", &y);
	
	int result = add(x,y);
	
	printf("Sum:%d", result);
}