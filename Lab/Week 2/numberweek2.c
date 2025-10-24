// neg pos or 0 using if else
#include<stdio.h>
int main()
{
	int num;
	printf("Enter Number: ");
	scanf("%d", &num);
	
	if (num > 0)
	{
		printf("Number is positive.");
	}
	else if (num < 0)
	{
		printf("Number is negative.");
	}
	else
	{
		printf("Number is 0.");
	}
	 

}