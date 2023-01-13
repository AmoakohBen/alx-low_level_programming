#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: single input.
 * Return: 1 if c is digit, otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
