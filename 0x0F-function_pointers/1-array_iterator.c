#include "function_pointers.h"

/**
 * array_iterator - exectues a function given as a parameter
 * - on each element of an array
 * @array: array
 * @size: size of the array
 * @action: pointer to the function that should be used
 * Return: nothing, void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
