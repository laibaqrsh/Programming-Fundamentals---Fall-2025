// check to see if 4th and 7th bits on. if on turn them off

#include<stdio.h>
int main()
{
	int num, result;
	printf("Enter Number (between 0-255): ");
	scanf("%d", &num);
	
	if ((num&72)== 72) // check if bits on
	{
		printf("4th and 7th bits are on.\n");
		result = num & ~72;
		printf("Number with 4th and 7th bits off is %d.", result);
		
	}
	else printf("4th and 7th bits are off.");
}