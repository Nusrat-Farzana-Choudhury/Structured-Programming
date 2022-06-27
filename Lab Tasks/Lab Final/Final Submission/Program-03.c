/*Problem-03: Write a program that takes two float numbers as input and shows the result of addition and subtraction.*/

#include<stdio.h>
int main()
{
	float a,b,add,sub;
	
	printf("Enter 2 integers:\n");
	scanf("%f %f",&a,&b);
	printf("\n");
	
	add=a+b;
	sub=a-b;
	
	printf("Addition=%.2f\n",add);
	printf("Subtraction=%.2f\n",sub);
	
	return 0;
}
