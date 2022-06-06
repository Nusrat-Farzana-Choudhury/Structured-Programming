#include <stdio.h>
int main()
{

   int i,n,sum=0;
   
   printf("Enter number of terms: ");
   scanf("%d",&n);
   
   for (i=1; i<=n; i++)
      {
      	printf("\n%d",2*i-1);
      	
        sum+= 2*i-1;
	  }
	  
	printf("\n\nThe sum of odd natural numbers is= %d",sum);
    
    return 0;
}
