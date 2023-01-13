#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such bytes is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, stop;
	char *tmp;

	for (i = 0; *(s + i + 1); i++)
	{
		stop = 0;
		for (j = 0; *(accept + j + 1); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				tmp = s + i;
				stop = 1;
				break;
			}
			tmp = 0;
		}
		if (stop == 1)
			break;
	}
	return (tmp);
}
