#include "main.h"
/**
 * leet - turn specific letters to num
 * @s: string
 * Return: s
 */

char *leet(char *s)
{
	int i, j;
	char l[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = n[j];
			}
		}
	}

	return (s);
}
