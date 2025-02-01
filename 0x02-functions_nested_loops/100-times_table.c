#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: n
 *
 * Return: (void)
 */

void print_times_table(int n)
{
	int i, j, mult, check;

	check = n * n;
	if ((n > 15) || (n < 0))
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			mult = i * j;
			if (check < 100)
			{
				if (j == 0)
				{
					_putchar('0');
				}
				else if (mult < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mult + '0');
				}
				else if (mult >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}
			}
			else
			{
				print_gt99(j, mult);
			}
		}
		_putchar('\n');
	}
}

/**
 * print_gt99 - prints the value of the product greater than 99
 * @j: checker for first iteration
 * @mult: multiplication
 * Return: (void)
 */

void print_gt99(int j, int mult)
{
	if (j == 0)
	{
		_putchar('0');
	}
	else if (mult < 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(mult + '0');
	}
	else if (mult >= 10 && mult < 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar((mult / 10) + '0');
		_putchar((mult % 10) + '0');
	}
	else if (mult >= 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar((mult / 100) + '0');
		_putchar(((mult / 10) % 10) + '0');
		_putchar((mult % 10) + '0');
	}
}
