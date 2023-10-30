#include "main.h"

/**
 * _strlen_recursion - Calculate the length of a string using recursion
 * @s: The string for which to calculate the length
 *
 * Description:
 * This function recursively counts the number of characters in the string
 * until the null terminator is reached, at which point it returns the count.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0); /* The base case: when the end of the string is reached */
	}

	return (1 + _strlen_recursion(s + 1)); /* Recursively call functn with next */
}
