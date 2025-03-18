#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string
 *
 * Return: a pointer to the new string
 */
char *leet(char *str)
{
	char *target = "aeotl";
	char num[] = "43071";
	int i = 0, j;

	while (str[i] != '\0')
	{
		for (j = 0; target[j] != '\0'; j++)
		{
			if (str[i] == target[j] || (str[i] == target[j] - 32))
				str[i] = num[j];
		}
		i++;
	}
	return (str);
}
