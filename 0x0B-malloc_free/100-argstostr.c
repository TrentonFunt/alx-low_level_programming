#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: The number of arguments
 * @av: An array of argument strings
 *
 * Return: On success, a pointer to the concatenated string.
 *         Returns NULL if ac is 0, av is NULL, or if memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, j, k, totalLength = 0;

	/* Check if ac is 0 or av is NULL */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++) {
		for (j = 0; av[i][j] != '\0'; j++) {
			totalLength++;
		}
		totalLength++; /* For the newline character */
	}

	/* Allocate memory for the concatenated string */
	concatenated = (char *)malloc(totalLength * sizeof(char) + 1);

	/* Check if memory allocation failed */
	if (concatenated == NULL)
		return (NULL);

	/* Copy the arguments and insert newline characters */
	for (i = 0, k = 0; i < ac; i++) {
		for (j = 0; av[i][j] != '\0'; j++) {
			concatenated[k++] = av[i][j];
		}
		concatenated[k++] = '\n';
	}
	concatenated[k] = '\0'; /* Null-terminate the string */

	return (concatenated);
}
