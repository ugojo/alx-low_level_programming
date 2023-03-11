#include <stdio.h>
/**
 * main - program that prints its name,
 * followed by a new line.
 * @argc: arguments count
 * @argv: arguments values
 */
void main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
	{
		printf("av[%d]=%s\n", i, argv[i]);
	}

	return (0);
}
