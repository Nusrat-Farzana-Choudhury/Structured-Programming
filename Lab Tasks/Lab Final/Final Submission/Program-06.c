/*Problem-06: Write a c program to find out the sum of series 1 + 2 + …. + n*/

#include <stdio.h>
int main()
{
	int n, i, sum = 0;

	printf("Enter the number of terms: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		sum=sum+i;
	}

	printf("Sum = %d", sum);
	
	return 0;
}
