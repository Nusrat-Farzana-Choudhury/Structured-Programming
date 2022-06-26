/*ID:221-35-990
Name:Nusrat Farzana Choudhury*/
/*Problem-20:Write a C program to determine whether a given number is
prime or not.*/
#include<stdio.h>
int main()
{
int num,count=0,i;
printf("Enter any positive number: ");
scanf("%d",&num);
for(i=2; i<num; i++)
{
if(num%i==0)
{
count++;
break;
}
}
if(count==0)
{
printf("It's a prime number.");
}
else
{
printf("It's not a prime number.");
}
return 0;
}
