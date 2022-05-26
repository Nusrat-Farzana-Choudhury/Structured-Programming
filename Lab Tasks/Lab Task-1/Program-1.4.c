#include <stdio.h>
int main ()

{
 float fahrenheit,centigrade;
 
 printf("Enter the temperature of city (in fahrenheit): ");
 scanf("%f",&fahrenheit);
 
 centigrade= (5.00/9.00)* (fahrenheit-32.00);
 
 printf("The temperature of city (in centigrade): %.2f",centigrade);

	
	return 0;
}
