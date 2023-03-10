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
	int len1, len2;
	char *conct;
	char *cont_val;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	conct = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

			if (conct == NULL)
			{
			return ((char *)NULL);
			}


			cont_val = conct;
			while (*s1)
			{
				*cont_val = *s1;
				cont_val++;
				s1++;
			}
			while (*s2)
			{
				*cont_val = *s2;
				cont_val++;
				s2++;
			}

			*cont_val = '\0';
			return (conct);
}
