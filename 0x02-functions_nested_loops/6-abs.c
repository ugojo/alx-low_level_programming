#include "main.h"
/*
 * abs - A function that computes
 * the absolute value of an integer.
 * @c: the int to be checked
 * Return: Absoulate value of numbeer or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
