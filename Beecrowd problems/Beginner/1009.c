#include<stdio.h>
int main()
{
	char name[50];
  double fixed, sale, total;
	
	scanf("%s",&name);
	scanf("%lf %lf",&fixed, &sale);
	
	total = fixed + sale*0.15;
	
	printf("TOTAL = R$ %.2lf\n",total);
		
	return 0;
}
