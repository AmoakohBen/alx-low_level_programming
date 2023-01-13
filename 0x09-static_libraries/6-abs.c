#include "main.h"

/**
 * _abs - prints absolute value of number
 *@ab: integer input
 * Return: Always 0 (Success)
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
