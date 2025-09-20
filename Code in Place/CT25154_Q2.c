//Triangle type identifier
// nested loop 

#include<stdio.h>

int main()
{
	int side_1 , side_2 , side_3;
	printf("Enter Side 1: ");
	scanf("%d", &side_1);
	printf("Enter Side 2: ");
	scanf("%d", &side_2);
	printf("Enter Side 3: ");
	scanf("%d", &side_3);
	if (side_1 + side_2 >= side_3 && side_2 + side_3 >= side_1 && side_1 + side_3 >= side_2)
	{
		if (side_1 == side_2 == side_3)
		{
			printf("The triangle is valid and equilateral.");
		}
		else if (side_1 == side_2 && side_2 != side_3 && side_1 != side_3 || side_2 == side_3 && side_2 != side_1 && side_3 != side_1 || side_1 == side_3 && side_1 != side_2 && side_3 != side_2)
		{
			printf("The triangle is valid and isoceles.");
		}
		else printf("The triangle is valid and scalene.");
	}
	else printf("Triangle is not valid.");
}

