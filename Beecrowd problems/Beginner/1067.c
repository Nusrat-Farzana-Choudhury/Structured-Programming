#include<stdio.h>
int main(){
	int X,i=1;
	scanf("%d",&X);
	
	if(1 <= X <= 1000) 
	{
		while(i<=X)
		{
			if(i%2!=0)
			{
				printf("%d\n",i);
			}
			
			i++;
		}
	}
	
	
	return 0;
}
