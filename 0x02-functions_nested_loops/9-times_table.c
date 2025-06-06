#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: (void)
 */
void times_table(void)
{
	int i, j, mult;

	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mult = i * j;
			if (j == 0)
			{
				_putchar('0');
			}
			else if (mult < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mult + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
