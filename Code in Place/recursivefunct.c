#include <stdio.h>

// recursive function to calculate sum of first n natural numbers
int sumNatural(int n) 
{
    if (n == 1) {  
        return 1;
    } else {       
        return n + sumNatural(n - 1);
    }
}

int main() {
    int n = 5;
    int sum = sumNatural(n);
    printf("Sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}
