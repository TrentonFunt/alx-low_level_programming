#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string using malloc
 * @str: The string to duplicate
 *
 * Return: On success, a pointer to the duplicated string.
 *         Returns NULL if str is NULL or if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int len, i;

	/* Check if str is NULL */
	if (str == NULL)
		return (NULL);

	/* Calculate the length of the input string */
	for (len = 0; str[len]; len++)
		;

	/* Allocate memory for the duplicated string */
	duplicate = (char *)malloc((len + 1) * sizeof(char));

	/* Check if memory allocation failed */
	if (duplicate == NULL)
		return (NULL);

	/* Copy the string to the newly allocated memory */
	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
