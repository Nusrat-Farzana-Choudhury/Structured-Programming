/*ID:221-35-990
Name:Nusrat Farzana Choudhury*/

/*Problem-23: Write the code to find the factorial of a number.*/

#include<stdio.h>
int main()
{

int i,fact=1,number;

printf("Enter a number: ");
scanf("%d",&number);

for(i=1; i<=number; i++)
{
fact=fact*i;
}
printf("Factorial of %d is: %d",number,fact);

return 0;
}
