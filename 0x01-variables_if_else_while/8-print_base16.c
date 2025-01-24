#include <stdio.h>

/**
 * main - Entry point: print all single digit numbers of base 16
 * starting from 0 using `putchar`
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char alp;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (alp = 97; alp <= 102; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
