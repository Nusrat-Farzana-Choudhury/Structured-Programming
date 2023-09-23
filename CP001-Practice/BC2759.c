#include<stdio.h>
int main() {
    int i;
    char a[i];
    
    for (i=0;i<3;i++){
    	scanf(" %c",&a[i]);
	}
	
	for(i=0;i<3;i++){
		printf("A = %c, B = %c, C = %c",a[i],a[i+1],a[i+2]);
		a[i+2+1]=a[i]; //swapping 
		printf("\n");
	}
    return 0;
}
