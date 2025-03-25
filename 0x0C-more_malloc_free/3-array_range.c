#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array, i, diff;

	if (min > max)
		return (NULL);
	diff = (max - min) + 1;
	array = malloc(sizeof(int) * diff);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < diff; i++)
		array[i] = min++;
	return (array);
}
