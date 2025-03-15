#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: nothing, void
 */
void puts_half(char *str)
{
	int i = 0, half;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 1)
		half = (i - 1) / 2;
	else
		half = i / 2;
	while (i != 0)
	{
		_putchar(str[half]);
		i--;
		half++;
	}
	_putchar('\n');
}
