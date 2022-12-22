#include "main.h"
/**
 * _strcmp - compare strings
 * @s1: string
 * @s2: string
 * Return: diff
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
		{
			diff = 0;
		}
		i++;
	}

	return (diff);
}
