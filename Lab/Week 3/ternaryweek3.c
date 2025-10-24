// voting using ternary operators
#include<stdio.h>
int main()
{
	int age;
	printf("Enter Age: ");
	scanf("%d", &age);
	
	age >= 18 ? printf("Eligible for voting.") : printf("Not eligible for voting.");
	
}
