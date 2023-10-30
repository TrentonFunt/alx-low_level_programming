#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to search for.
 *
 * Return: A pointer to the byte in 's' that matches
 * one of the bytes in 'accept'.
 *         If no matching byte is found, it returns NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
				return (s); /* Return a pointer to the matching byte in 's' */
			a++;
		}
		s++;
	}

	return (NULL); /* Return NULL if no matching byte is found */
}
