#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 *
 * Return: (void)
 */

void print_alphabet_x10(void)
{
	int i, alp;

	for (i = 0; i < 10; i++)
	{
		for (alp = 97; alp <= 122; alp++)
		{
			_putchar(alp);
		}
	_putchar('\n');
	}
}
