#include "main.h"
#include <string.h>
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int pos;

	pos = strspn(s, accept);

	return (pos);
}
