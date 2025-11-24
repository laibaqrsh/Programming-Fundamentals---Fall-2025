//fibonacci using for loop
#include<stdio.h>

int main()
{
	int first = 0;
	int sec = 1;
	int next;
	
	printf("%d, %d, ", first, sec);
	
	for (int i = 3; ; i++)
	{
		next = first + sec; //the coming no. is sum of 1st and 2nd
		
		if (next > 1000)
			break;
		
		printf("%d, ", next); // 0,1,1 -> 1,1.. we need to move forward
		
		
		first = sec; //now first has 1 and sec has 1. in next loop next = 1+1 = 2
		sec = next;	
	}
	return 0;
}