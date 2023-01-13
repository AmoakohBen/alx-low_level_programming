#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination
 * @src: source
 * @n: number of bytes of sourc required
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}

	for (i = 0; i < n ; i++)
	{
		dest[len + i] = src[i];
		if (src[i] == '\0')
			i = n;
	}

	return (dest);
}
