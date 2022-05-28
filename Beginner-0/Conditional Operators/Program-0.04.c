#include<stdio.h>
int main()
{
	double cgpa,ielts_score;
	
	printf("Enter CGPA: ");
	scanf("%lf",&cgpa);
	printf("Enter IELTS score: ");
	scanf("%lf",&ielts_score);
	
	if(cgpa>=3.75)
	{
	    if(ielts_score>=7.0)
		{
			printf("\nCongratulations! You've got the scholarship.");
		}
		
	}
	else
	{
		printf("Rejected");
	}
	
	return 0;
}
