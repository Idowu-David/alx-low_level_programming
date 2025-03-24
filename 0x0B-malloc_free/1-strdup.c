#include "main.h"

/**
 * _strdup - returns a pointer to a new string which is a duplicate of
 * - the string `str`.
 * @str: string
 * Return: a pointer to the new string
 */
char *_strdup(char *str)
{
	int len = 0, i;
	char *mem;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;
	mem = malloc((len + 1) * (sizeof(char)));
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		mem[i] = str[i];
	mem[i] = '\0';
	return (mem);
}
