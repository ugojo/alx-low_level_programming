#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	int len;
	static char *str_val;
	char *dup_str;

	len = strlen(str);

	str_val = (char *)malloc(sizeof(char) * len + 1);

	if (str_val == NULL)
	{
		return ((char *)NULL);
	}

	dup_str = str_val;

	while (*str)
	{
		*dup_str = *str;
		dup_str++;
		str++;
	}

	*dup_str = '\0';

	return (str_val);
}

