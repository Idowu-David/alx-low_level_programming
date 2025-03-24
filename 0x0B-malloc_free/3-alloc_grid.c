#include "main.h"

/**
 * alloc_grid - creates a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: a pointer to the array or NULL if failed
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **mem;

	if (width <= 0 || height <= 0)
		return (NULL);
	mem = malloc(sizeof(int *) * height);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		mem[i] = malloc(sizeof(int) * width);
		if (mem[i] == NULL)
		{
			while (i > 0)
			{
				free(mem[i - 1]);
				i--;
			}
			free(mem);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			mem[i][j] = 0;
	}
	return (mem);
}
