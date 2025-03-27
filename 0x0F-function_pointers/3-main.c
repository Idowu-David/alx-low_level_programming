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

	if (argc != 4 || (atoi(argv[3]) == 0 && ((strcmp(argv[2], "/") == 0) || (strcmp(argv[2], "%") == 0))))
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	operator= argv[2];
	num2 = atoi(argv[3]);

	printf("num1: %d\n", num1);
	printf("op: %s\n", operator);
	printf("num2: %d\n", num2);

	return (0);
}