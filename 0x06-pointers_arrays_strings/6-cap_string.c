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
	int length = strlen(str);

	for (i = 0; i < length; i++)
	{
		str[i] = toupper(str[i]);
	}

	return str;
}
