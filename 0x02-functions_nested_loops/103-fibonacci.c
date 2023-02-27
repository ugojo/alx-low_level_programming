#include <stdio.h>
/**
 * main - Fibonacci sequence whose values do not exceed 4,000,000,
 * write a program that finds and prints the sum of the even-valued terms
 * Return : the even number
*/

int main(void)
{
   int i;

   unsigned long int even, sum, fb1 = 0, fb2 = 1;

   for (i = 0; i < 50; i++)
   {
     sum = fb1 + fb2;

     if (sum < 4000000)
     {

     fb1 = fb2;
     fb2 = sum;

     even = sum % 2;

     if (even == 0)
     {
        printf("%lu ", sum);
     }

    }
   }
   return (0);
}
