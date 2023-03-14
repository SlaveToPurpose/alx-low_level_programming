#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create 2d array of integers
 *
 * @width: number of columns in array
 * @height: number of rows in array
 *
 * Return: NULL if fail/ parameters = 0, pointer to grid on success
 */

int **alloc_grid(int width, int height)
{
	int **pParray;
	int king;
	int of;
	int glory;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	else
	{
		pParray = (int **) malloc(sizeof(int *) * height);
		king = 0;

		while (king < height)
		{
			pParray[king] = (int *) malloc(width * sizeof(int));
			king++;
		}

		for (glory = 0; glory < height; glory++)
		{
			for (of = 0; of < width; of++)
			{
				pParray[glory][of] = 0;
			}
		}
		return (pParray);
	}
}

