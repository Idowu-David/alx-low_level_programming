#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: number of argument passed
 * @argv: array of the arguments
 * Return: 0, Success
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;
	int (*func)(int, int);

	operator = argv[2];
	func = get_op_func(operator);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((atoi(argv[3]) == 0 && ((strcmp(argv[2], "/") == 0) ||
	(strcmp(argv[2], "%") == 0))))
	{
		printf("Error");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%d\n", func(num1, num2));

	return (0);
}
