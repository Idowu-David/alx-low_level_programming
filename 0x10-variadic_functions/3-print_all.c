#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function.
 * Return: nothing, void
 */
void print_all(const char *const format, ...)
{
	int len = strlen(format);
	va_list args;

	va_start(args, len);

}
