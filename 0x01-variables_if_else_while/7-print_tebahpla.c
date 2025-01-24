#include <stdio.h>

/**
 * main - Entry point: print the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp;

	for (alp = 122; alp >= 97; alp--)
	{
		putchar(alp);
	}
	putchar('\n');

	return (0);
}
