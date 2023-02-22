#include "main.h"
#include  <unistd.h>
/**
 * _putchar - A program that prints _putchar,
 * followed by a new line
 * Return: 1 (success)
 */

int _putchar(char c)
{
	return (write(1, &c,1));
}
