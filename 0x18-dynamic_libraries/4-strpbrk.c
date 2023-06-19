#include "main.h"
#include <string.h>
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int pos;
	char *remaing;

	pos = strspn(s, accept);

	remaing = s + pos;

	return (remaing);
}
