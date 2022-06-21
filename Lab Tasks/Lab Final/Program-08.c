/*Write a menu driven program which has the following options-

          i )Factorial  ii) Prime or not  iii) odd  iv) Even  v) Exit*/

#include <stdio.h>
int main ()
{
    int i=1,num,fact=1,count=0,choice;
    
    
    printf("Enter an integer:\n");
    scanf("%d",&num);
    
    printf("\nOptions are as below:\n");
    printf("1)Factorial\t\t2)Prime or not\t\t3)Odd\t\t4)Even\t\t5)Exit\n");
    
    printf("\nEnter your choice:\n");
    scanf("%d",&choice);
    
	switch(choice)
	{
		case 1:
			for(i=1; i<=num; i++)
			{
				fact=fact*i;
			}
			    printf("\nFactorial=%d.",fact);
		        break;
		    
		case 2: 
		    for(i=2;i<num;i++)
			{
	 
            	if(num%i==0)
				{ 
				count++;
		        break;
	            }
	
            }

            if(count==0)
			{ 
			printf("\nPrime number.");
            }
            else
			{
	        printf("\nNot prime number.");
			}
		    break;
		    
		case 3:
		    if(num%2!=0)
			{
			printf("\nOdd.");
			}
			else
			{
			printf("\nNot odd.");
			}
			break;    
		
		case 4:
			if(num%2==0)
			{
			printf("\nEven.");
			}
			else
			{
			printf("\nNot even.");
			}
			break;
			
		default:
			printf("\nExit\n");
	}	
	
	 
	 	
    return 0;
}
