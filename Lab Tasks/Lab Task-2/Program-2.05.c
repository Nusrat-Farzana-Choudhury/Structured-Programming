#include <stdio.h>
int main() 
{
   int arif,fahmid,joy;
   
   printf("Enter the age of Arif: ");
   scanf("%d",&arif);
   printf("Enter the age of Fahmid: ");
   scanf("%d",&fahmid);
   printf("Enter the age of Joy: ");
   scanf("%d",&joy);
   
   if(arif<fahmid && arif<joy)
   {
   	printf("Arif is the youngest.");
   }
   else if(fahmid<arif && fahmid<joy)
   {
   	printf("Fahmid is the youngest.");
   }
   else
   {
   	printf("Joy is the youngest.");
   }
   
    return 0;
}
