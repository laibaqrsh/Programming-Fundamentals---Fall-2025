// Use strncpy to copy only the first 4 letters of "Programming" into a second character array, and print it safely (make sure it ends with \0).
#include<stdio.h>
#include<string.h>

int main()
{
	char src[] = "Programming";
	char dest[15];
	strncpy(dest ,src ,4); // copying 4 characters
	dest[4] = '\0'; // at 4th index null is stored
	printf("%s", dest);
	
}