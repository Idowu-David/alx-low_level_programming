#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the array
 * @n: number of elements of the array
 * Return: nothing, void
 */
void reverse_array(int *a, int n)
{
	int i, j = n - 1, temp;

	for (i = 0; i < n / 2; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
