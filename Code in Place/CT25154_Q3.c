// Electricity Bill Calculator
// Write a program to calculate electricity bill
// based on units consumed:
//First 100 units ? Rs. 5 per unit
//Next 100 units (101–200) ? Rs. 7 per unit
//Above 200 units ? Rs. 10 per unit
#include<stdio.h>

int main()
{
	int unit;
	printf("Enter total units consumed: ");
	scanf("%d", &unit);
	if (unit <= 100)
	{
		printf("Electricity bill: Rs.%d", unit*5);	
	}
	else if (unit > 100 && unit <= 200) 
	{
		printf("Electricity bill: Rs.%d", 100*5+(unit-100)*7);
	}
	else printf("Electricity bill: Rs.%d", 100*5+100*7+(unit-200)*10);
}
