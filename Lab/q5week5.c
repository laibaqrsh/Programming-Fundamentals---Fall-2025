// find maximum of 2 numbers using ternary
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter Number 1: ");
	scanf("%d", &num1);
	printf("Enter Number 2: ");
	scanf("%d", &num2);
	
	num1==num2 ? printf("Numbers are equal.")
	: num1>num2 ? printf("Number 1 maximum.")
	: printf("Number 2 is maximum");
	
}
