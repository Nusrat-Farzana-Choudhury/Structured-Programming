/*Write a C program to list even & odd numbers between 1 to 50.*/


#include<stdio.h>
int main()
{
	int i=1;
	
	printf("Even numbers between 1 to 50 are listed:");
	
	for(i=1;i<=50;i++)
	{
	  if(i%2==0)
	  {
	  	printf("\n%d",i);
	  }
  }
    
  printf("\n\n\nOdd numbers between 1 to 50 are listed:");
    
  for(i=1;i<=50;i++)
  {
	  if(i%2!=0)
	  {
	  	printf("\n%d",i);
	  }
	
  }
	  return 0;
}
