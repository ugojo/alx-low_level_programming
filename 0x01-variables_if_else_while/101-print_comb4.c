#include <stdio.h>
/**
 * main - A program that prints all possible
 * different combinations of three digits.
 * Return: 0 (success)
 */

int main(void)
{
	int n;
	int m;
	int l;

	for (n = 48; n <= 58; n++)
	{
		for (m = 49; m <= 58; m++)
		{
			for (l = 50; l = 58; l++)
			{
				if (l > m || m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);

					if (n != 55 || m != 58)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
