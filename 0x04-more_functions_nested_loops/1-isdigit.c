#include "main.h"

/**
 * _isdigit - checks if a character is a digit (0 through 9)
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1); /* Character is a digit */
	}
	else
	{
		return (0); /* Character is not a digit */
	}
}
