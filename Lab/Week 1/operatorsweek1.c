//Write a program to calculate the area of a rectangle using length * width.
#include<stdio.h>
int main()
{
	float L,W,area;
	printf("Enter Length: ");
	scanf("%f", &L);
	printf("Enter Width: ");
	scanf("%f", &W);
	
	area = L*W;
	printf("Area of rectangle: %.2f", area);
	
}