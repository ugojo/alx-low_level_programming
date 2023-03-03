#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */

char *cap_string(char *str)
{
	int i;
	for (i = 0; str[i]; ++i)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		else if (str[i - 1] == ' '
				|| str[i - 1] == ""
				|| str[i - 1] == ','
				|| str[i - 1] == '-'
				|| str[i - 1] == '\t'
				|| str[i - 1] == '\n'
				|| str[i - 1] == '.'
				|| str[i - 1] == '-'
				|| str[i - 1] == '?'
				|| str[i - 1] == '!'
				|| str[i - 1] == '('
				|| str[i - 1] == ')'
				|| str[i - 1] == '{'
				|| str[i - 1] == '}')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;

			}
		}
	}
	return (str);
}
