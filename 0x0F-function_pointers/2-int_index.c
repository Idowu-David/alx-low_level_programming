#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size
 * @cmp: a pointer to the function used to compare values
 * Return: the index of the first element for which `cmp` function does
 * - not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, flag = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		return (-1);
	return (i);
}
