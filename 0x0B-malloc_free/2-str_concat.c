#include <main.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: On success, a pointer to the concatenated string.
 * Returns NULL if memory allocation fails or if s1 and s2 are both NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* Check if s1 is NULL */
	if (s1 == NULL)
		s1 = "";

	/* Check if s2 is NULL */
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s1 and s2 */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* Allocate memory for the concatenated string, including null terminator */
	concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	/* Check if memory allocation failed */
	if (concatenated == NULL)
		return (NULL);

	/* Copy s1 to the beginning of the concatenated string */
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	/* Copy s2 to the end of the concatenated string */
	for (j = 0; j < len2; j++)
		concatenated[i + j] = s2[j];

	/* Add null terminator to the end of the concatenated string */
	concatenated[i + j] = '\0';

	return (concatenated);
}
