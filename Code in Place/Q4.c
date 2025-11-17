#include <stdio.h>

void printChar(char *chPtr) 
{
    if (chPtr != NULL) 
	{ // check if the pointer is not null
        printf("The character is: %c\n", *chPtr);
    } else 
	{
        printf("Pointer is NULL.\n");
    }
}

int main() 
{
    char myChar = 'A';
    char *ptr = &myChar;

    printChar(ptr); 

    return 0;
}
