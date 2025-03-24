#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the new string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j = 0;
	char *mem;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = len2 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	mem = malloc(sizeof(char) * (1 + len1 + len2));
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		mem[i] = s1[i];
	for (j = 0; j < len2; i++, j++)
		mem[i] = s2[j];
	mem[i] = '\0';
	return (mem);
}
