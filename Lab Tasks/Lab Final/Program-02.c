/*Write a program that take two integers as input and print the result of addition, subtraction, multiplication & division.*/

#include<stdio.h>
int main()
{
	int a,b,add,sub,mul,div;
	
	printf("Enter 2 integers:\n");
	scanf("%d %d",&a,&b);
	
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	
	printf("Addition=%d\n",add);
	printf("Subtraction=%d\n",sub);
	printf("Multiplication=%d\n",mul);
	printf("Division=%d\n",div);
	
	return 0;
}
