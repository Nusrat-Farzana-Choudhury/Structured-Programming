#include <stdio.h>
int main()
{

   int i,n,sum=0;
   printf("Enter number of terms: ");
   scanf("%d",&n);
   
   for (i=1;i<=n;i++)
      {
      	printf("\n%d",i);
        sum+= i;
	  }
	printf("\n\nThe sum of the series is= %d",sum);
    return 0;
}
