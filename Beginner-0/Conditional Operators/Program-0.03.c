#include<stdio.h>
int main()
{
	double marks;
	
	printf("Enter marks in Structured Programming Lab: ");
	scanf("%lf",&marks);
	
	
	if(marks>=80 && marks<=100)
	{
		printf("\nGrade: A+");
		
	}
	else if(marks>=75 && marks<=79)
	{
		printf("\nGrade: A");
		
	}
	else if(marks>=70 && marks<=74)
	{
		printf("\nGrade: A-");
		
	}
	else if(marks>=65 && marks<=69)
	{
		printf("\nGrade: B+");
		
	}
	else if(marks>=60 && marks<=64)
	{
		printf("\nGrade: B");
		
	}
	else if(marks>=55 && marks<=59)
	{
		printf("\nGrade: B-");
		
	}
	else if(marks>=50 && marks<=54)
	{
		printf("\nGrade: C+");
		
	}
	else if(marks>=45 && marks<=49)
	{
		printf("\nGrade: C");
		
	}
	else if(marks>=40 && marks<=44)
	{
		printf("\nGrade: D");
		
	}
	else{
		
		printf("\nGrade: F");
	}
	
	
	
	return 0;
}
