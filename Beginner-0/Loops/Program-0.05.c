/*Write a C program to print first 10 natural numbers using 'Do While' loop.*/

#include <stdio.h>
int main ()
{
	int i=1;
	
    do
    {
    	printf("%d\n",i);
        i++;
    }
    while(i<=10);
	
    return 0;
}
