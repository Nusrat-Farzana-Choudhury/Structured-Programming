#include <stdio.h>
int main()
{

   int i,n;
   float sum=0.00, avg;
   
   printf("Enter number 10 numbers:\n");
 
   
   for (i=1;i<=10;i++)
      {
      	scanf("%d",&n);
        sum+= n;
	    }
	  
	avg= sum/10;
	  
	printf("\n\nThe sum of the entered numbers is= %.2f",sum);
  printf("\nThe average of the entered numbers is= %.2f\n\n",avg);	
    
    return 0;
}
