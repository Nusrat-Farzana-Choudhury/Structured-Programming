#include<stdio.h>
int main()
{
	int amount,ten,fifty,hundred;
	
	printf("Enter the amount to be withdrawn :");
	scanf("%d",&amount);
	
	ten=amount/10;
	fifty=amount/50;
	hundred=amount/100;
	
	printf("The cashier will give ten notes=%d\n fifty notes=%d\n hundred notes=%d\n",ten,fifty,hundred);
  
  return 0;
}
