#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings with a limit on s2
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes from s2 to concatenate
 *
 * Return: A pointer to the concatenated string
 *         Returns NULL if memory allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, total_len, i;
	char *concatenated;

	/* Handle NULL strings as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of the strings */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* Determine the actual number of bytes to concatenate from s2 */
	if (n >= len2)
		n = len2;

	/* Calculate the total length of the concatenated string */
	total_len = len1 + n;

	/* Allocate memory for the concatenated string */
	concatenated = malloc((total_len + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	/* Copy the first string (s1) to the concatenated string */
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	/* Copy the first n bytes of the 2nd string (s2) to the concatd string */
	for (i = 0; i < n; i++)
		concatenated[len1 + i] = s2[i];

	/* Null-terminate the concatenated string */
	concatenated[total_len] = '\0';

	return (concatenated);
}
