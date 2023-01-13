#include "main.h"

/**
 * _strstr - finds the first occurence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer tothe beginning of located substring or
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
		a++;
	}
	return (0);
}
