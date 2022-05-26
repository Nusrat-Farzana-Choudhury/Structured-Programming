#include <stdio.h>
int main ()

{
 float farenheit,centigrade;
 
 printf("Enter the temperature of city (in farenheit): ");
 scanf("%f",&farenheit);
 
 centigrade= (5.00/9.00)* (farenheit-32.00);
 
 printf("The temperature of city (in centigrade): %.2f",centigrade);

	
	return 0;
}
