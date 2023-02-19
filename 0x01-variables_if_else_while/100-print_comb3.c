#include <stdio.h>
/**
 * main - A program that all possible
 * different combinations of two digits.
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	for (n = 1; n < 90; n++)
	{
		putchar((n % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

