#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - get ends of input and
 * add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1 , len2;
	static char *cont;
	char *cont_val;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	cont = (char *)malloc(sizeof(char) * (len1 + len2 + 1);

			if (cont == NULL)
			{
			return ((char *)NULL);
			}

			i = 0;
			j = 0;

			cont_val = cont;
			while (*s1)
			{
			cont_val[i] = s1[i];
			i++;
			}
			while (*s2)
			{
			cont_val[i] = s2[j];
			i++;
			j++;
			}

			cont_val = '\0';
			return (cont);
}

