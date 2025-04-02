#include "main.h"

/**
 * strtow - splits a string into words
 * @str: string
 * Return: a pointer to an array of strings(words)
 */
char **strtow(char *str)
{
	char **mem;
	int i = 0, j, index = 0, let = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			for (j = i; str[j] != ' '; j++)
				let++;
			index++;
			i = j;
		}
		i++;
	}
	mem = malloc(sizeof(char *) * (index + 1));
	if (mem == NULL)
		return (NULL);
	mem = malloc(sizeof(char) * (let + index));
	if (mem == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; str[j] != ' '; j++)
		{
			index = i;
			mem[i][j] = str[index++];
		}
		mem[index] = '\0';
		i = index;
	}
	mem[index] = NULL;
	return (mem);
}
