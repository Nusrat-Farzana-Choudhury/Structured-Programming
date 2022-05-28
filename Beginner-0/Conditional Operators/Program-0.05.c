#include<stdio.h>
int main()
{
	double gpa,ielts_score;
	
	
	printf("Enter your GPA in HSC:");
	scanf("%lf",&gpa);
	printf("Enter IELTS score:");
	scanf("%lf",&ielts_score);
	
	if(gpa==5.00 || ielts_score>=7.00)
	{
		printf("\nCongratulations! You've got Canadian Scholarship.");
	}
	else
	{
		printf("\nSorry, No Scholarship. Better luck next time.");
	}
	
	return 0;
	
}
