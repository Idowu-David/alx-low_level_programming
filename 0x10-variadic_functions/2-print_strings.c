#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints a string.
 * @separator: character to separate the strings.
 * @n: number of arguments.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *collector;

	va_start(args, n);
	if (n == 0)
		printf("\n");
	for (i = 0; i < n; i++)
	{
		collector = va_arg(args, char*);
		if (collector == NULL)
			collector = "(nil)";
		if (i != (n - 1) && separator != NULL)
			printf("%s%s", collector, separator);
		else if (i != (n - 1) && separator == NULL)
			printf("%s", collector);
		else
			printf("%s\n", collector);
	}
	va_end(args);
}
