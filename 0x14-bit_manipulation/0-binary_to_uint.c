#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to string of binary number.
 *
 * Return: the converted number, or 0 if
 * - there is one or more chars in the string b that is not 0 or 1.
 * - b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i;

	if (b == NULL)
		return 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return 0;

		decimal = decimal * 2 + (b[i] - '0');
	}

	return decimal;
}
