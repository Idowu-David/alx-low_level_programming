#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @i: integer
 *
 * Return: the absolute value of the integer
 */

int _abs(int i)
{
	if (i < 0)
		return (i * -1);
	return (i);
}
