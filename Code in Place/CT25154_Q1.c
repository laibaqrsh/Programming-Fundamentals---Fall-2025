//Leap Year checker
// to check divisibilty use % 

#include <stdio.h>

int main()
{
	int year;
	printf("Enter Year: ");
	scanf("%d", &year);
	if (year % 400 == 0)
	{
		printf("Leap Year.");
	}
	else if (year % 4 == 0 && year % 100 != 0)
	{
		printf("Leap Year.");
	}
	else printf("Not a leap year.");
}
