#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: pointer to array of arguments passed
 * Return: 0, success
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
