#include "function_pointers.h"

/**
 * print_name - prints a name
 * @f: function pointer
 * @name: name
 * Return: nothing, void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
