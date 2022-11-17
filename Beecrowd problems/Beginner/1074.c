#include<stdio.h>
int main(){
	int N,X;
	scanf("%d",&N);
	
	if(N < 10000) 
	{
		while(N--)
		{
			scanf("%d",&X);
			
			if(X<0)
			{
				if(X%2==0)
				printf("EVEN NEGATIVE\n");
				
				else
				printf("ODD NEGATIVE\n");
			}
			
			
		   else	if(X>0)
		   {
		        if(X%2==0)
				printf("EVEN POSITIVE\n");
				
				else
				printf("ODD POSITIVE\n");
		   }
		   
		   else
		   {
		   	printf("NULL\n");
		   }

		}
	}
	
	
	return 0;
}
