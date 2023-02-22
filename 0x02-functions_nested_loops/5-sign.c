#include "main.h"
/**
 * print_sign -A function that prints
 * the sign of a number.
 * @n: is the int to be checked
 * Return: 1 and prints + if n is greater than zero,
 * 0 and prints 0 if n is zero,
 * -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchart('+');
		return (1);
	}
	else if (n = 0 )
	{
		_putchart('0');
		return (0)
	}
	else
	{
		_putchart('-');
		return (-1);
	}
}
