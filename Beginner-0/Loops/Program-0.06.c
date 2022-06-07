/* Write a C program to print 10 natural numbers in reversed order using 'Do While' loop.*/

#include<stdio.h>
int main()
{
	int i=10;
	
	do
	{
		printf("%d\n",i);
	    i--;
	}
	while (i>0);
	
	
	return 0;
}
