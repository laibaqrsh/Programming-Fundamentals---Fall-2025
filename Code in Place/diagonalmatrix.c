// Write a program that copies "Hello" into a new string using strcpy and prints it
#include<stdio.h>
#include<string.h>

int main()
{
	char src[] = "Hello";
	char dest[20];
	strcpy(dest,src);
	printf("Copied string: %s", dest);
	return 0;
}