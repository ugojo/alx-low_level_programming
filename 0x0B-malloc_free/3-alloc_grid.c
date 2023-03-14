#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **martix;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	martix = malloc(sizeof(int *) * width);

	for (i = 0; i < width; i++)
	{
		martrix[i] = malloc(sizeof(int) * height);
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			martrix[i][j] = 0;
		}
	}
	return (martix);
	free(martix);
