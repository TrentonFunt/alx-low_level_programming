/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string to search.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of the character 'c' in 's',
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	/* Loop through the string 's' */
	while (*s != '\0')
	{
		/* Check if the current character matches 'c' */
		if (*s == c)
		return (s); /* Return a pointer to the character if found */
		s++; /* Move to the next character in the string */
	}

	return (c == '\0' ? s : NULL); /* Return NULL 'c' not found, or if 'c' */
}
