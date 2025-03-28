#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own function.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, exits with an error otherwise.
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (unsigned char *)main; // Pointer to main function's memory

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", ptr[i]); // Print each byte in 2-digit hexadecimal format
		if (i < num_bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
