/*Problem-08: Calculate grade using switch case by following Daffodil University's grading method.*/

#include <stdio.h>
int main()
{
	int num;

	printf("Enter obtained number: ");
	scanf("%d",&num);

	switch(num)
	{

		case 80  ...  100:
			printf("Grade:A+");
			break;
		case 75 ... 79:
			printf("Grade:A");
			break;
		case 70 ... 74:
			printf("Grade:A-");
			break;
		case 65 ... 69:
			printf("Grade:B+");
			break;
		case 60 ... 64:
			printf("Grade:B");
			break;
		case 55 ... 59:
			printf("Grade:B-");
			break;
		case 50 ... 54:
			printf("Grade:C+");
			break;
		case 45 ... 49:
			printf("Grade:C");
			break;
		case 40 ... 44:
			printf("Grade:D");
			break;
		case 0 ... 39:
			printf("Grade:F");
			break;
		default:
			printf("Wrong Input!");


	}

	return 0;
}
