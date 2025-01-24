#include <stdio.h>

/**
 * main - Entry point: prints the alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp != 'e' && alp != 'q')
			putchar(alp);
	}
	putchar('\n');

	return (0);
}
