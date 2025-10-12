// calculator
#include<stdio.h>
int main()
{
	int num1 , num2, sum, sub, div, multiply, remain;
	char op;
	printf("Enter Number 1: ");
	scanf("%d", &num1);
	
	printf("Enter Number 2: ");
	scanf("%d", &num2);	
	
	printf("Enter operator (+ , -, *, /, %): ");
	scanf(" %c", &op);
	
	switch(op)
	{
		case '+':
			sum = num1 + num2;
			printf("Answer: %d",sum);
			break;
		case '-':
			sub = num1 - num2;
			printf("Answer: %d",sub);			
			break;
		case '/':
		    div = num1 / num2;
			printf("Answer: %d",div);		    
			break;
		case '*':
		    multiply = num1 * num2;
			printf("Answer: %d",multiply);		    
			break;
		case '%':
		   if (num2 != 0)
		   {
		   	 remain = num1 % num2;
			printf("Answer: %d",remain);
		   }		    
			break;
		default: printf("Invalid operator.");	
	}	
}