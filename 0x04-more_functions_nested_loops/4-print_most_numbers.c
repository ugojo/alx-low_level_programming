#inculde "main.h"
/**
 * print_most_numbers - A function that prints the numbers, from 0 to 9
 * description - print the nmber exclding 2 and 4
 * Return: since 0 is up to 9
 */

void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		if (x == 2  || x == 4)
		{
			continue;
		}
		else
		{
			_purchar(x + '0');
		}
	}
	putchar("\n");
}
