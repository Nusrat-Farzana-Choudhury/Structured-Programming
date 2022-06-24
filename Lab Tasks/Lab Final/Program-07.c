/*Write a program to print all the prime numbers from 1-300.*/

#include <stdio.h>
int main ()
{
    int i = 2, a = 2, is_prime;
    while (i <= 300)
    {
        is_prime = 1;

        while (a < i)
        {
              if (i % a == 0) 
		      {
                is_prime = 0;
                break;
              }

              a++;
              continue;
        }

          if(is_prime==1)
          printf ("%d\n", i);

        a = 2;
        i++;
    }
    return 0;
}
