#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all its parameters.
 * @n: number of integers to sum.
 *
 * Return: returns the sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	int collector, sum = 0;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		collector = va_arg(args, int);
		sum += collector;
	}
	va_end(args);
	return (sum);
}
