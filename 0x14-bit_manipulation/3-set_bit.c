#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Pointer to the integer value
 * @index: Index to be set
 *
 * Return: (1) if it worked
 *	(-1) if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int num;

	if (index > 63)
	{
		return (-1);
	}
	num = 1 << index;
	*n = *n | num;
	return (1);
}
