#include "main.h"
#include  <unistd.h>
/**
 * _putchar - A program that prints _putchar,
 * followed by a new line
 * Return: 1 (success).
 * on error, -1 is returned, and erron is set approximately.
 */

int _putchar(char c)
{
	return (write(1, &c,1));
}
