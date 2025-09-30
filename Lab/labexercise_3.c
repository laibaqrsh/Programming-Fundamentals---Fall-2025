// calc saved amount, price after discount
#include<stdio.h>

int main()
{
	int price, disc_20, disc_30;
	printf("Enter price of item: ");
	scanf("%d", &price);
	
	if (price >= 2000 && price <= 4000)
	{
		disc_20 = price*20/100;
		printf("Actual Amount:%d\nSaved Amount:%d\nAmount after discount:%d\n",price,disc_20,price-disc_20);
	}
	else if (price >= 4001 && price <= 6000)
	{
		disc_30 = price*30/100;
		printf("Actual Amount:%d\nSaved Amount:%d\nAmount after discount:%d\n",price,disc_30,price-disc_30);
	}
	else printf("Actual Amount:%d\nSaved Amount:%d\nAmount after discount:%d\n", price,price*50/100,price-price*50/100);
}