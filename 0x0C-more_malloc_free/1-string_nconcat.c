#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes to be copied
 * Return: a pointer to the new string or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/**
	 * get the length of s1
	 * allocate memory of s1 + n
	 * loop to n, and copy the contents from the end of s1.n
	 * add '\0'
	 * return
	 */
	unsigned int i = 0, j = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while(s2[j] != '\0')
		j++;
	if (n > j)
		n = j;
	str = malloc(sizeof(char) * (i + n + 1));
	if (str == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		str[j] = s1[j];

	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
