/*ID:221-35-990
  Name:Nusrat Farzana Choudhury*/
  
//Problem-02:Write a program in C to read n number of values in an array and display it in reverse order.

#include <stdio.h>
int main()
{
	int i=1,n,values[100000]; //this array can hold upto 100000 values

  printf("Enter the number of terms: ");
	scanf("%d",&n);	//taking input for size of the array

	printf("\nEnter integers:\n");

    for(i=1; i<=n; i++)
	{
		scanf("%d", &values[i]); // taking input and storing it in an array
	}

	printf("\nDisplaying integers in reversed order:\n");

	// printing elements of the array
	for(i=n; i>=1; i--)
	{
		printf("%d\n", values[i]);
	}
	return 0;
}
