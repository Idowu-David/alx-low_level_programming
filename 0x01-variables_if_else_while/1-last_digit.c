#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point: print the last digit of a number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, remainder;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	remainder = n % 10;
	printf("Last digit of %d is %d ", n, remainder);

	if (remainder > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (remainder == 0)
	{
		printf("and is 0\n");
	}
	else if (remainder < 6 && remainder != 0)
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
