#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: pointer to strings.
 *
 * Return: returns the capitalized string.
 */

char *cap_string(char *str)
{
	int len, sepLen, index, i; /* i means index2 */
	char *sep = " \t\n,;.!?\"(){}";

	len = strlen(str);
	sepLen = strlen(sep);

	for (index = 0; index < sepLen; index++)
	{
		for (i = 0; i < len; i++)
		{
			if(i == 0)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
			}
			if (str[i] == sep[index])
			{
				if ((str[i + 1] >= 'a' && str[i + 1] <= 'z'))
					str[i + 1] -= 32;
			}
		}
	}
	return (str);
}