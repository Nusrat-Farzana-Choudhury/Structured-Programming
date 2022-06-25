/*ID:221-35-990
  Name:Nusrat Farzana Choudhury*/
  
//Problem-01:Write a program in C to store elements in an array and print it.

#include <stdio.h>
int main()
{
	int i,a,values[100000]; //this array can hold upto 100000 variables

  printf("Enter the number of terms: ");
	scanf("%d",&a);	//taking input for size of the array

	printf("Enter integers:\n");

    for(i=0; i<a; i++)
	{
		scanf("%d", &values[i]); // taking input and storing it in an array
	}

	printf("Displaying integers:\n");

	// printing elements of the array
	for(i=0; i<a; i++)
	{
		printf("%d\n", values[i]);
	}
	return 0;
}
