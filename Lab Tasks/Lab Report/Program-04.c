/*ID:221-35-990
  Name:Nusrat Farzana Choudhury*/

//Problem-04:Write a program in C to copy the elements of one array into another array.

#include <stdio.h>
int main()
{
	int arr1[100000], arr2[100000];
	int i, n;

	printf("Input the number of elements to be stored in the array :");
	scanf("%d",&n);

	printf("Input %d elements in the array :\n",n);
	for(i=0; i<n; i++)
	{
		printf("element - %d : ",i);
		scanf("%d",&arr1[i]);
	}
	/* Copy elements of first array into second array.*/
	for(i=0; i<n; i++)
	{
		arr2[i] = arr1[i];
	}

	/* Prints the elements of first array   */
	printf("\nThe elements stored in the first array are :\n");
	for(i=0; i<n; i++)
	{
		printf("% 5d", arr1[i]);
	}

	/* Prints the elements copied into the second array. */
	printf("\n\nThe elements copied into the second array are :\n");
	for(i=0; i<n; i++)
	{
		printf("% 5d", arr2[i]);
	}
	printf("\n\n");
	
	return 0;
}
