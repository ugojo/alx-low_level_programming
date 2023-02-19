#include <stdio.h>
/**
 * main - A program that prints all possible
 * different combinations of three digits.
 * Return: 0 (success)
 */

int main(void)
{
	int n;


	for (n = 2; n < 0; n++)
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
		putchar((n % 10) + '0');
		putchar(',');
		putchar(' ');

	}
	putchar('\n');
	return (0);
}
