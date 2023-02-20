#include <stdio.h>
/**
 * main - A program that all possible
 * different combinations of two digits.
 * Return: 0 (success)
 */

int main(void)
{
	int m, n;

	for (m = 48; m <= 56; m++)
	{
		for (n = 47; n <= 57; n++)
		{
			if (n != m)
			{

				putchar(m);
				putchar(n);

				if (m != 56 && n != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

		putchar('\n');
		return (0);
	}
}
