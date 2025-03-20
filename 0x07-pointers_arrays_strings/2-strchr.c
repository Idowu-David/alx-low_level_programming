#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: a pointer to the first occurence of the character c in s
 * - or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	if (c == '\0')
		return s;
	while (s[i] != '\0')
	{	
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
