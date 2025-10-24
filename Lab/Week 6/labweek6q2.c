//department and subdept using switch
#include<stdio.h>
int main()
{
	int dept, sub_Dept;
	printf("Enter department name\n1. CS or 2. EE\n");
	scanf("%d", &dept);
	switch(dept)
	{
		case 1:
			printf("Sub department in CS:\n1. CSCB\n2. CSAI\n3. CSDS\n4. CSGA\n");
			scanf("%d", &sub_Dept);
			switch(sub_Dept)
			{
				case 1:
					printf("You are from CS Cybersecurity department.");
				break;
				case 2:
					printf("You are from CS Artifical Intelligence department.");
				break;
				case 3:
					printf("You are from CS Data Science department.");
				break;
				case 4:
					printf("You are from CS Gaming and Animation department.");
				break;
				default: printf("Invalid.");
					
			}
		break;
		case 2:
			printf("You are from Electrical Engineering department.");
		break;
		default: printf("Invalid");
	}
}