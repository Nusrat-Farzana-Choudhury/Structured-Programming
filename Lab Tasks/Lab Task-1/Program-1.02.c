#include <stdio.h>
int main ()

{
  
 float km, meter,feet,inches,centimeter;
 printf("Enter the distance between Mirpur & Ashuliya (in km): ");
 scanf("%f",&km);
 meter=km*1000;  //1 km=1000 meters
 feet=km*3280.8399; //1km=3280.8399 feets
 inches=km*39370.078; //1km=39370.078 inches
 centimeter=km*100000; //1km=100000 centimeter
	
 printf("Distance between Mirpur to Ashulia (in meter) :%.2f\n",meter);
 printf("Distance between Mirpur to Ashulia (in feet) :%.2f\n",feet);
 printf("Distance between Mirpur to Ashulia (in inches) :%.2f\n",inches);
 printf("Distance between Mirpur to Ashulia (in centimeter) :%.2f\n",centimeter);
	
	
return 0; 
  
}
