/*ID:221-35-990
Name:Nusrat Farzana Choudhury*/
/*Problem-06: Write a program in C to print all unique elements in an array*/
#include <stdio.h>
int main()
{
int arr[100000], n,ctr=0;
int i, j;
printf("Input the number of elements to be stored in the array: ");
scanf("%d",&n);
printf("\nInput %d elements in the array :\n",n);
for(i=0; i<n; i++)
{
printf("Element - %d : ",i);
scanf("%d",&arr[i]);
}
printf("\nThe unique elements found in the array are: \n");
for(i=0; i<n; i++)
{
ctr=0;
for(j=0; j<n+1; j++)
{
/*Increment the counter when the search value is duplicate.*/
if (i!=j)
{
if(arr[i]==arr[j])
{
ctr++;
}
}
}
if(ctr==0)
{
printf("%d ",arr[i]);
}
}
return 0;
}
