#include "main.h"

/**
 * print_number - Prints an integer using only _putchar.
 * @n: The integer to print.
 *
 * Return: nothing, void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n; /* Convert to positive */
	}

	if (n / 10) /* If there are more digits, print recursively */
		print_number(n / 10);

	_putchar((n % 10) + '0'); /* Print last digit */
}
