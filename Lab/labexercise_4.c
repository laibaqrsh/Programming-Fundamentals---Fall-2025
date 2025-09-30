// quadratic equation

#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,x1,x2;
	double eq_1, result;
	printf("Enter value of a: ");
	scanf("%f", &a);
	printf("Enter value of b: ");
	scanf("%f", &b);
	printf("Enter value of c: ");
	scanf("%f",&c);
	
	eq_1 = b*b-4*a*c;
	
	if (eq_1 <= 0)
	{
		printf("Error.");
	}
	else 
	{
	result = sqrt(eq_1);
	x1 = (-b + result) / (2*a);
	x2 = ((-b) - (result)) / (2*a);
	printf("Answer 1:%f\nAnswer 2:%f", x1, x2);
    }
}