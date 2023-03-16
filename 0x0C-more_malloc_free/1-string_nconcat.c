#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2;
	char *s, *s_val;

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

	if (n < len2)
	{
		s = malloc(sizeof(char) * (len1 + n + 1));
	}
	else
	{
		s = malloc(sizeof(char) * (len1 + len2 + 1));
	}

	if (*s)
	{
		return (NULL);
	}

	s_val = s;
	while (*s1)
	{
		*s_val = *s1;
		s_val++;
		s1++;
	}
	while (n < len2 && i < (len1 + n))
	{
		*s_val = *s2;
		s_val++;
		s2++;
	}
	while (n >= len2 && i < (len1 + len2))
	{
		*s_val = *s2;
		s_val++;
		s2++;
	}
	s_val = '\0';

	return (s);
}
