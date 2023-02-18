#include <stdio.h>
/**
 * main - A program that all the numbers of
 * base 16 in lowercase
 * Return: 0 (success)
 */

int main(void)
{
	int c;
	char d;

	c = 0;
	d = 'a';

	while (c < 10)
	{
		putchar(c + '0');
		c++;
	}
	while (d <= 'f')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}

