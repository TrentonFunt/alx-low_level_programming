#include "main.h"

/**
 * _strstr - Locates a substring in a string.
 * @haystack: The string to search in.
 * @needle: The substring to find.
 *
 * Return: A pointer to the beginning of the located substring.
 *         If the substring is not found, it returns NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*haystack && *n && *haystack == *n)
		{
			haystack++;
			n++;
		}

		if (!*n)
			return (h); /* Return a pointer to the start of the located substring */

		haystack = h + 1;
	}

	return (NULL); /* Return NULL if the substring is not found */
}
