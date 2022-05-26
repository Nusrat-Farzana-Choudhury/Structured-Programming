#include <stdio.h>
int main ()
{
int a,b,add,sub,multiply,division,remainder;
	
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    
    add=a+b;
    sub=a-b;
    multiply=a*b;
    division=a/b;
    remainder=a%b;
    
    printf("Addition Result= %d\n",add);
    
    printf("Subtraction Result= %d\n",sub);
   
    printf("Multiplication Result= %d\n",multiply);
   
    printf("Division= %d\n",division);
    
    printf("Remainder= %d\n", remainder);

     return 0;
}
