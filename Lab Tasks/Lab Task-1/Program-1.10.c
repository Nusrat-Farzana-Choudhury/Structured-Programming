#include<stdio.h>
int main()
{
	int total_population, men_population, women_population, literate_population, literate_men, literate_women, illiterate_men, illiterate_women;
	
	total_population= 80000;
	men_population= total_population*0.52;
	women_population= total_population-men_population;
	literate_population= 80000*0.48;
	literate_men= 80000*0.35;
	literate_women= literate_population-literate_men;
	illiterate_men= men_population-literate_men;
	illiterate_women= women_population-literate_women;
	
	printf("The number of illiterate men is: %d\n",illiterate_men);
	printf("The number of illiterate women is: %d",illiterate_women);
	
	return 0;
	
}
