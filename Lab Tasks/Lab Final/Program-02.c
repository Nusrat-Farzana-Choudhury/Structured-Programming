/*Write a program that take two integer as input and print the result of addition, subtraction, multiplication, division.*/

#include<stdio.h>
int main()
{
	float a,b,add,sub,mul,div;
	
	printf("Enter 2 integers:\n");
	scanf("%f %f",&a,&b);
	
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	
	printf("Addition=%.2f\n",add);
	printf("Subtraction=%.2f\n",sub);
	printf("Multiplication=%.2f\n",mul);
	printf("Division=%.2f\n",div);
	
	return 0;
}
