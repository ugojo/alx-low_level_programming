#include <stdio.h>
/**
 * main - A program that prints
 * alphebelts in revers mode
 * Return: 0 (success)
 */

int main(void)
{
	char c;

	c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
