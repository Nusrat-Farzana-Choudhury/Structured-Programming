/*Problem-04: Enter a six digit number and show the sum of its digits and show the number in reversed order.*/

#include<stdio.h>
int main()
{
	int num,reverse,sum,remainder;
	
	printf("Enter a six digit number:");
	scanf("%d",&num);
	
	while(num!=0)
	{
		remainder=num%10;
		reverse=reverse*10+remainder;
		sum=sum+remainder;
		num=num/10;
	}

	
	printf("\nThe sum of its digits is=%d\n",sum);
	printf("Reverse of the number is=%d\n",reverse);
	
	return 0;
}
