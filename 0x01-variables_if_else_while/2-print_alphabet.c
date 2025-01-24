#include <stdio.h>

/**
 * main - Entry point: print the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp;

	for (alp = 97; alp <= 122; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
}
