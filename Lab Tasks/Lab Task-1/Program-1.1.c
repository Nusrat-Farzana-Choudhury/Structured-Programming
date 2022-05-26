#include <stdio.h>
int main ()

{
     float basic_salary, gross_salary;
     printf("Enter Niloy's basic salary: ");
     scanf("%f",&basic_salary);
     gross_salary= basic_salary- 0.4*basic_salary - 0.2*basic_salary;
     printf("Niloy's gross salary: %.2f", gross_salary);
     
     return 0;

}
