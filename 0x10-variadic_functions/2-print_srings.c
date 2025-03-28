#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: separator
 * @n: number of arguments
 * Return: nothing, void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *chr;

	if (n == 0)
		return;
	if (separator == NULL)
		separator = "";
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		chr = va_arg(args, char *);
		if (chr == NULL)
			chr = "(nil)";
		if (i < n - 1)
			printf("%s%s", chr, separator);
		else
			printf("%s", chr);
	}
	printf("\n");
}
