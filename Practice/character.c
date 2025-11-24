/* Write a C program to input a character from user and check whether given character is small 
alphabet, capital alphabet, digit or special character, using if else. */
#include<stdio.h>

int main()
{
	char ranChar;
	printf("Enter character: ");
	scanf("%c", &ranChar);
	
	if (ranChar >= 'a' && ranChar <= 'z')
	{
		printf("Character is a small alphabet.");
	}
	else if (ranChar >= 'A' && ranChar <='Z')
	{
		printf("Character is a capital alphabet.");
	}
	else if (ranChar >= '0' && ranChar <= '9')
	{
		printf("Character is a digit.");
	}
	else printf("Character is a special character.");			
}