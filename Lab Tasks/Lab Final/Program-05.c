/*Write a program to find out your grade in final exam by taking the marks input from user. Follow DIU grading method.*/

#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter your marks:");
	scanf("%d",&num);
	
	if((num>=0)&&(num<=100))
	{
		if(num>=40)
		{
			printf("\nYou've passed!\n");
			
			if(num>=80)
			{
				printf("Grade:A+");
			}
			else if (num>=75)
			{
				printf("Grade:A");
			}
			else if(num>=70)
			{
				printf("Grade:A-");
			}
			else if(num>=65)
			{
				printf("Grade:B+");
			}
			else if(num>=60)
			{
				printf("Grade:B");
			}
			else if(num>=55)
			{
				printf("Grade:B-");
			}
			else if(num>=50)
			{
				printf("Grade:C+");
			}
			else if(num>=45)
			{
				printf("Grade:C");
			}
			else if(num>=40)
			{
				printf("Grade:D");
			}
			
		}
		else
		{
			printf("\nSorry! You've failed.\nGrade:F");
		}
	}
	
	else
	{
		printf("\nWRONG INPUT!");
	}

	

	return 0;
}
