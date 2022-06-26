/*ID:221-35-990
Name:Nusrat Farzana Choudhury*/

/*Problem-24: Enter a six digit number and print the number in reverse order and find the sum of its digits.*/

#include<stdio.h>
int main()
{

int num,reverse,sum=0,remainder;
printf("Enter a six digit number:");
scanf("%d",&num);

while(num!=0)
{
remainder=num%10;
reverse=reverse*10+remainder;
sum=sum+remainder;
num=num/10;
}

printf("\nThe sum of its digits is=%d\n",sum);
printf("Reverse of the number is=%d\n",reverse);

return 0;
}
