/*Problem-07: Write a C program to create an array of students' marks. Print the average marks.*/

#include <stdio.h>
int main()
{
	int arr[5];
	int i, sum=0, avg;

	printf("Enter obtained marks (for 5 students):\n");

	for(i=1; i<=5; i++)
	{
		printf("Student- %d : ",i);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}

	avg=sum/5;

	printf("\nAverage marks is= %d",avg);

	return 0;
}
