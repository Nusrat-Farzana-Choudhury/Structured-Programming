/*Problem-05: Write a program to find out the largest of three numbers.*/

#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter three integers:\n");
	scanf("%d %d %d",&a,&b,&c);
	
	if ((a>b)&&(a>c))
	{
		printf("\n%d is the largest number.",a);
	}
	else if ((b>a)&&(b>c))
	{
		printf("\n%d is the largest number.",b);
	}
	else
	{
		printf("\n%d is the largest number.",c);
	}
	
	return 0;
}
