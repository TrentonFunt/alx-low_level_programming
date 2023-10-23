/**
 * _strstr - Locates a substring within a string.
 * @haystack: Pointer to the string to search in.
 * @needle: Pointer to the substring to find.
 *
 * Return: A pointer to the beginning of the located substring in 'haystack',
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	/* Loop through the characters in 'haystack' */
	for (i = 0; haystack[i] != '\0'; i++)
	{
		/* Initialize 'j' for each character in 'haystack' */
		j = 0;

		/* Loop to compare 'needle' with a potential substring in 'haystack' */
		while (needle[j] != '\0' && haystack[i + j] != '\0'
		&& needle[j] == haystack[i + j])
		{
			j++; /* Increment 'j' for each matching character */
		}

		/* Check if a full match for 'needle' is found */
		if (needle[j] == '\0')
			return (haystack + i); /* Return a pointer to the start of the substring */
	}

	return (NULL); /* Return NULL if the substring is not found in 'haystack' */
}
