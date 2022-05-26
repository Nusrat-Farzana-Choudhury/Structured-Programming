#include<stdio.h>
int main()
{
  
	float total_selling_price, total_profit, total_cost_price, each_cost_price;
	
	printf("Enter the total selling price for 15 ietms: ");
	scanf("%f",&total_selling_price);
	
	printf("Enter total profit :");
	scanf("%f",&total_profit);
	
	total_cost_price=total_selling_price-total_profit;
	each_cost_price=total_cost_price/15;
	
	printf("The cost price for each item is: %.2f",each_cost_price);
	
  return 0;
  
}
