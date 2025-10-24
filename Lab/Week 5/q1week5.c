// Find if a person is eligible for voting
#include<stdio.h>

int main()
{
	int age;
	printf("Enter Age: ");
	scanf("%d",&age);
	if (age>=18)
	{
		printf("Eligible for voting.");
	}
	else printf("Not eligible for voting.");

}
