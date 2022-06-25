/*ID:221-35-990
  Name:Nusrat Farzana Choudhury*/
  
//Problem-03:Write a program in C to find the sum of all elements of the array.

#include <stdio.h>
int main()
{
	int i=1,n,values[100000],sum=0; //this array can hold upto 100000 values

    printf("Enter the number of terms: ");
	scanf("%d",&n);	//taking input for size of the array

	printf("\nEnter integers:\n");

    for(i=1; i<=n; i++)
	{
		scanf("%d", &values[i]); // taking input and storing it in an array
		sum=sum+values[i];
	}

	printf("\nSum of all elements of the array is= %d",sum);

	return 0;
}
