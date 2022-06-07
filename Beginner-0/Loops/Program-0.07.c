/*Write a C program to display first 5 natural numbers using loop,condition & break statement. Display 'Out of loop' for the numbers above 5.
Hint: Use for loop for 10 natural numbers & then apply condition for first 5 numbers.*/

#include<stdio.h>
int main()
{
	int i;
	
	for(i=1;i<11;i++)
	{
		
		if(i>5)
		{
			break;	
		}
		
		
	   printf("%d\n",i);
		
	}
	
	printf("\nOut of loop\n");
	
	return 0;
}
