#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int len = 0, i, index = 0, j;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[index++] = av[i][j];
		str[index++] = '\n';
	}
	str[index] = '\0';
	return (str);
}
