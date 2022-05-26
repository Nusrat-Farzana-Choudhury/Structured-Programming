#include <stdio.h>
int main ()

{
 float subject_1, subject_2, subject_3, subject_4, subject_5, aggregate, percentage;
 
 printf("Enter the number of Subject-1 :");
 scanf("%f",&subject_1);
 printf("Enter the number of Subject-2 :");
 scanf("%f",&subject_2);	
 printf("Enter the number of Subject-3 :");
 scanf("%f",&subject_3);
 printf("Enter the number of Subject-4 :");
 scanf("%f",&subject_4);
 printf("Enter the number of Subject-5 :");
 scanf("%f",&subject_5);
 
 aggregate=subject_1+subject_2+ subject_3+ subject_4+ subject_5;
 percentage=aggregate*(100.00/500.00);
 
 printf("Aggregate marks obtained by a student is: %.2f\n",aggregate);
 printf("The obtained marks in percent: %.2f",percentage);
	
	return 0;
}
