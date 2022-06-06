#include <stdio.h>
int main()
{

   int i,n,sum=0;
   
   printf("Enter number of terms: ");
   scanf("%d",&n);
   
   for (i=1; i<=n; i++)
      {
      	printf("\n%d",2*i);
      	
        sum+= 2*i;
	    }
	  
	 printf("\n\nThe sum of odd natural numbers is= %d\n\n",sum);
    
    return 0;
}
