// lab week 7; sum q
#include<stdio.h>
int main()
{
	int counter = 4;
	float sum = 1;
	while(counter<=400)
	{
		sum = sum+(1/counter);
		counter = counter + 4;
	}
	printf("Sum=%.2f", sum);
}