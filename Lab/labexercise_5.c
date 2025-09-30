// check divisibility of no by 7

#include<stdio.h>

int main()
{
	int num, a,b,result_1,c,d,result_2,e,f,result_3,g,h,result_4;
	printf("Enter Number: ");
	scanf("%d", &num);
	
	a = num % 10; //  last digit
	b = num / 10; // remaining digit
	result_1 = (a*2)-b;
	if (result_1 == 7 || result_1 == -7 || result_1 == 0)
	{
		printf("%d is divisible by 7.", num);
	}
	else 
	{
		c = result_1 % 10; // last digit
		d = result_1 / 10; // rest of the digit
		result_2 = (c*2)-d;
		if (result_2 == 7 || result_2 == -7 || result_2 == 0)
		{
			printf("%d is divisible by 7.", num);
		}
		else
		{
			e = result_2 % 10; // last digit
			f = result_2 / 10; // rest
			result_3 = (e*2)-f; 
			if (result_3 == 7 || result_3 == -7 || result_3 == 0)
			{
				printf("%d is divisible by 7.", num);
			}
			else 
			{
				g = result_3 % 10; // last digit
				h = result_3 / 10; // remaining 
				result_4 = (g*2)-h;
				if (result_4 == 7 || result_4 == -7 || result_4 == 0)
				{
					printf("%d is divisible by 7.", num);
				}
				else
				{
					printf("%d is not divisible by 7.", num);
				}
				
			}
		}
	}
	
	
}