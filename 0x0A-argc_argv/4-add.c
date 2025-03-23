#include "main.h"

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: pointer to array of arguments passed
 * Return: 0, success
 */
int main(int argc, char **argv)
{
	int i, j = 0, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}