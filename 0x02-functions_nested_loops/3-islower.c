#include "main.h"

/**
 * _islower - checks for lowercase character
 *@c: single input
 * Return: 1 if int c is lower, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
