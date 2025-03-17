#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: nothing, void
 */
void rev_string(char *s)
{
	int i, j = 0;
	char temp;

	while (s[j] != '\0')
		j++;
	j--;
	for (i = 0; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
