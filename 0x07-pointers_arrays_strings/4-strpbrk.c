/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing acceptable bytes.
 *
 * Return: A pointer to the first byte in 's' that matches one of the bytes
 *         in 'accept', or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	/* Loop through the characters in 's' */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Loop through the characters in 'accept' to check for a match */
		for (j = 0; accept[j] != '\0'; j++)
		{
			/* Check if the current character in 's' matches any in 'accept */
			if (s[i] == accept[j])
				return (s + i); /* Return a pointer to the matching byte in 's' */
		}
	}

	return (NULL); /* Return NULL if no matching byte is found */
}
