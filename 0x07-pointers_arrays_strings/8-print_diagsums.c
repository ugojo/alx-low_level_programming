#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum, *ptr;
	sum = 0;

	for (i =  0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				*ptr = a[i][j];
				sum = sum + ptr;
			}
		}

	}
}
