/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing acceptable characters.
 *
 * Return: The number of bytes in the initial segment of 's' consisting
 *         only of bytes from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0; /* Initialize the length of the prefix substring */
	int i, j;
	int match;

	/* Loop through 's' */
	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0; /* Initialize the match flag for each character in 's */

		/* Loop through 'accept' to check if 's[i]' is an acceptable character */
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1; /* Set the match flag if 's[i]' is an acceptable character */
				break; /* Exit the inner loop once a match is found */
			}
		}

		if (match == 0)
		return (length); /* Return the length when a non-matching char is found */

		length++; /* Increment the length for each matching character */
	}

	return (length); /* Return total length after checking all chars in 's' */
}
