#include <stdio.h>
/**
 * main - A program that prints lowercase alphabet
 * i reverse oder
 * Result: 0 (success)
 */

int main(void)
{
	char c;

	c = 'z';

	while (c <= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
