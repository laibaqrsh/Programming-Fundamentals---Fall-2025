// lab exercise 1

#include<stdio.h>

int main()
{
	char letter;
	
	printf("Enter Character: ");
	scanf("%c", &letter);
	
	if (letter >= '0' && letter <= '9')
	{
		printf("Digit.");
	}
	else if (letter >= 'a' && letter <= 'z')
	{
		printf("Lowercase character.");
	}
	else if (letter >= 'A' && letter <= 'Z')
	{
		printf("Uppercase character.");
	}
	else printf("Special character.");
}