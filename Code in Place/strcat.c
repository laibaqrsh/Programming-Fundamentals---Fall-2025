//concatenate your first name and last name using strcat.
#include <stdio.h>
#include <string.h>

int main() {
    char firstName[20] = "Laiba";
    char lastName[20] = "Qureshi";
    char fullName[50];

    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    printf("Full Name: %s\n", fullName);

    return 0;
}