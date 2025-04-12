#include "main.h"

/**
 * _strstr - locates a substring
 * - it finds the first occurence of the substring `needle`
 * - in the string `haystack`.
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the beginning of the located substring
 * - or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (NULL);
}
