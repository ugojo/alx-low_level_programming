#include "main.h"
#include  <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 * Return: On 1 (success).
 * on error, -1 is returned, and erron is set approximately.
 */

int _putchar(char c)
{
	return (write(1, &c,1));
}
