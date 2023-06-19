#include "main.h"
#include <string.h>
/**
 * _strncat - concatenate two strings
 * @dest: The string to be concate to
 * @src: the additional string
 * @n: the addres of the function strncat
 * Return: the concated string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
