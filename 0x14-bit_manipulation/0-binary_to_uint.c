#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, weghit, binary;
	unsigned int dec, rem;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < 0 || b[i] > 1)
		{
			return (0);
		}
	}
	binary = b;
	dec = 0;
	weghit = 1;
	while (binary != 0)
	{
		rem = binary % 10;
		dec = dec + rem * weghit;
		binary = binary / 10;
		weghit = weghit * 2;
	}
	return (dec);
}
