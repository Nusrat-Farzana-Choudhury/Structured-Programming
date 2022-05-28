#include <stdio.h>

int main()
{
    int base,height,hypotenuse,area,perimeter;

    printf("Enter the base of triangle: ");
    scanf("%d",&base);

    printf("Enter the height of triangle: ");
    scanf("%d",&height);

    printf("Enter the hypotenuse of triangle: ");
    scanf("%d",&hypotenuse);

    area = 0.5*base*height;
    perimeter = base+height+hypotenuse;

    if(area>perimeter)
	{
        printf("\nArea is greater than perimeter.");
    }
	else
	{
		printf("\nPerimeter is greater than area.");
	}

    return 0;
}
