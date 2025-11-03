// Compare two user-input strings using strcmp and print “Equal” or “Not Equal”.
#include<stdio.h>
#include<string.h>

int main()
{
	char a[20];
	char b[20];
	
	printf("Enter first word: ");
	scanf("%s", a);
	printf("Enter second word: ");
	scanf("%s", b);
	

	if (strcmp(a,b) == 0)
	{
		printf("Equal.");
	}
	else
	{
	    printf("Not equal.");
	}
	
}
