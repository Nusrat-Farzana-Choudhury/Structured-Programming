#include <stdio.h>
int main() 
{
   float angle1,angle2,angle3,sum;
   
   printf("Enter the value of an angle (in degrees): ");
   scanf("%f",&angle1);
   printf("Enter the value of another angle (in degrees): ");
   scanf("%f",&angle2);
   printf("Enter the value of the other angle (in degrees): ");
   scanf("%f",&angle3);
   
   sum=angle1+angle2+angle3;
   
   if(sum==180.00)
   {
   	printf("The triangle is valid.");
   }
   else
   {
   	printf("The triangle is invalid.");
   }
   
   return 0;
}
