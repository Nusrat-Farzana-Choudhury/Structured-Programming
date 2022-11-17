#include<stdio.h>
int main(){
	int X,Y,i,sum=0,min,max;
	scanf("%d %d",&X,&Y);
	
	if(X>Y)
	{
		  min=Y;
	    max=X;
	}
    else
    {
    	min=X;
	    max=Y;
	}
	
	for(i=min+1;i<max;i++) //between min & max, excludes min & max value
	{
		if(i%2!=0)
		{
			sum=sum+i; //adding up odd values only
		}
		
	}
	printf("%d\n",sum); //sum=0; if X=Y or X & Y are consecutive numbers
	
	
	return 0;
}
