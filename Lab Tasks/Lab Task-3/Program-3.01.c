#include<stdio.h>
int main()
{
    int i,hour,extra;
    for(i = 1; i <= 10; i++) 
    {
    printf("\nEnter the working hours of an employee: ");
	scanf("%d", &hour);
	
	if(hour>40)
	  {
		extra = (hour - 40)*12;
		printf("%d Rs. is the overtime pay of employee.\n", extra);
	  }
	else
		printf("This employee has not done overtime.\n");
    }
 return 0;
 
}
