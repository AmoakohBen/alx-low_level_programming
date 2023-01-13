#include "main.h"

/**
 * _isalpha - check if c is alphabet
 * @c: single input
 * Return: 1 if c is alphabet, 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
