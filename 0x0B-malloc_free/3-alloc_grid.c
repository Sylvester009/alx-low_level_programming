#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width input to grid
 * @height: height input to grid
 *
 * Return: if width or height = 0, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **d_arr;
	int i, y;

	if (width < 1 || height < 1)
		return (NULL);

	d_arr = malloc(sizeof(int *) * height);

	if (d_arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		d_arr[i] = malloc(sizeof(int) * width);

		if (d_arr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(d_arr[i]);

			free(d_arr);

			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (y = 0; y < width; y++)
			d_arr[i][y] = 0;
	}

	return (d_arr);
}
