#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
    /*char *str;

    int x = atoi(s);
   return (x); 8*/

   int i, sum, b, a;

   i = 0;
   sum = 0;

//    for (i = strlen(s) - 1; i >= 0; i--)
//    {
//     if (s[i] >= 48 && s[i] <= 57)
//      {
//         sum = sum * 10 + (s[i] - 48);
//      }
//    }


   while (s[i] != '\0')
   {


     if (s[i] >= 48 && s[i] <= 57)
     {
        sum = sum * 10 + (s[i]- 48);
     }
      i++;
   }
 return sum;
}
