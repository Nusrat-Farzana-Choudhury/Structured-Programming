#include<stdio.h>
int main()
{
  
	float cost_price, selling_price, profit, loss;
	printf("Enter the cost price: ");
	scanf("%f",&cost_price);
	printf("Enter the selling price: ");
	scanf("%f",&selling_price);
	
	if (selling_price>cost_price)
	{
		printf("The seller has made profit.\n ");
		profit=selling_price-cost_price;
		printf("The amount of profit is: %.2f",profit);
	}
	
	else if (selling_price<cost_price)
	{
		printf("The seller has incurred loss.\n ");
		loss=cost_price-selling_price;
		printf("The amount of loss is: %.2f",loss);
	}

   return 0;
}
