#include<stdio.h>
int main() {
    int i;
    char a[i];
    
    for (i=0;i<8;i++){
    	scanf("%c",&a[i]);
	} // read in DD/MM/YY format & stored in array
	
	  printf("%c%c/%c%c/%c%c\n",a[3],a[4],a[0],a[1],a[6],a[7]);
	  printf("%c%c/%c%c/%c%c\n",a[6],a[7],a[3],a[4],a[0],a[1]);
	  printf("%c%c-%c%c-%c%c\n",a[0],a[1],a[3],a[4],a[6],a[7]);
    return 0;
}
