#include<stdio.h>

int main()
{
	float tax_rate;
	int salary;
	printf("Enter salary: ");
	scanf("%d", &salary);
	printf("Enter tax rate (%%): ");
	scanf("%f", &tax_rate);	
	
	float decimalTax = tax_rate / 100;
	float tax = decimalTax * salary;
	float SalaryWithTax = tax + salary;
	
	printf("Tax to be paid: Rs.%.2f\n", tax);
	printf("Salary with tax: Rs.%.2f", SalaryWithTax);
}