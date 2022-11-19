#include <stdio.h>

int main()
{
    int i;
    char A[9];
    for(i=1;i<=8;i++){
     
        scanf("%c",&A[i]); 
    } //DD/MM/YY
    
    printf("%c%c/%c%c/%c%c\n",A[4],A[5],A[1],A[2],A[7],A[8]); //MM/DD/YY
    printf("%c%c/%c%c/%c%c\n",A[7],A[8],A[4],A[5],A[1],A[2]); //YY/MM/DD 
    printf("%c%c-%c%c-%c%c\n",A[1],A[2],A[4],A[5],A[7],A[8]); //DD-MM-YY 
    return 0;
}
