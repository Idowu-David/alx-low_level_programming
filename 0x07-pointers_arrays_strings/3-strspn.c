#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: length of the substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, sum = 0, flag;

	while (s[i] != '\0')
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				sum += 1;
				flag = 1;
			}
		}
		if (flag == 0)
			break;
		i++;
	}
	return (sum);
}
