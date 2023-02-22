#include "main.h"
/**
 * print_sign - A function that prints 
 * the sign of a number.
 * @n: Is the int to be checked
 * Retrun: 1 and print + if n is greater than zero,
 * 0 and print 0  if n is  is zero,
 * otherwise -1 and print -
 * if n less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('0');
		return (0);
	}else
	{
		_putchar('-');
		return (-1);
	}
}
