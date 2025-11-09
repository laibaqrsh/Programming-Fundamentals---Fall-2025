// make function for cube 
#include<stdio.h>

int cube(int x)
{
	return x*x*x;
}
int main()
{
	int result, num;
	printf("Enter number: ");
	scanf("%d", &num);
	
	result = cube(num);
	printf("Cube of %d is %d", num,result);
	return 0;
	
}