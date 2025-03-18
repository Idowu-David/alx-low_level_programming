#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: a pointer to the new string
 */

char *cap_string(char *str)
{
	int len, sep_len, i, j;
	char separators[] = " \t\n,;.!?\"(){}";

	len = strlen(str);
	sep_len = strlen(separators);

	for (i = 0; i < sep_len; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (str[j] == separators[i])
			{
				if ((str[i + 1] >= 'a' && str[i + 1] <= 'z'))
					str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
