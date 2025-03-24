#include "main.h"

/**
 * main - prints the minimum number of coins to make change for an
 * - amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: 0, success
 */
int main(int argc, char **argv)
{
	int coin, count = 0, i;
	int denominations[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coin = atoi(argv[1]);
	if (coin < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		count += coin / denominations[i];
		coin %= denominations[i];
	}

	printf("%d\n", count);
	return (0);
}
