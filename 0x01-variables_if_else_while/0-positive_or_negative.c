#include <stdio.h>

/**
 * main - Entry point: print if a number is positive or negative
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	if (i < 0)
	{
		printf("%d is negative", i);
	}
	if (i > 0)
	{
		printf("%d is positive", i);
	}
	if (i == 0)
	{
		printf("%d is zero", i);
	}
	printf("\n");
	return (0);
}
