#include<stdio.h>

int main()
{
	int num;
	int SumNum;
	printf("Enter a 5 digit number: "); //12345
	scanf("%d", &num);
	
	int newNum = num;
	int sum = 0;
	
	for (int i = 0; i < 5; i++) // sum of digits
	{
		SumNum = newNum % 10; // 5
		sum += SumNum; // 0+5=5
		newNum /= 10; // 1234
	}
	
	if (sum % 2 == 0) //check if sum even
	{
		int isPrime = 1; //assume no. is prime at first
		if (num < 2)
		{
			isPrime = 0; //not a prime no.
		}
		else
		{
			for (int i = 2; i <= num/2; i++) //num cant be divided w no. > num/2
			{
				if(num % i == 0)
				{
					isPrime = 0; //not a prime no.
					break;
				}
			}
		}	
		if(isPrime)
		{
			printf("Sum of %d is even.\nIt's a prime number.", num);
		}
		else printf("Sum of %d is even.\nIt's not a prime number.", num);
	}
	if (sum % 2 != 0) // odd
	{
		int dig1 = num/10000; // 1
		int dig2 = (num/1000) % 10; // 2
		int dig3 = (num/100) % 10; // 3
		int dig4 = (num/10) % 10;
		int dig5 = num % 10; //5		
		
		if(dig1 == dig5 && dig2 == dig4)
		{
			printf("Sum of %d is odd.\nIt's a palindrome number.", num);
		}
		else printf("Sum of %d is odd.\nIt is not a palindrome number.", num);		
	}
}