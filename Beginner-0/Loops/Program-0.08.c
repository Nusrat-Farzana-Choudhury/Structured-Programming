/*Write a C program to print first 10 natural odd numbers using loop, condition & continue. 
Hint: Use for loop for 20 terms of natural numbers & then apply condition in it for odd numbers.*/

#include<stdio.h>
int main()
{
	int i,n=2;
	
	for(i=1;i<=20;i++)
	{
		
		if(i==n)
		{
			
			n=n+2;
			continue;
			
		}
		
		printf("%d\n",i);
	}
	
	
	return 0;
}
