#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char leet_map[10] = "AEOTLaeotl";
	char leet_replace[10] = "4307143071";

	/* Step 1: Loop through the input string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Step 2: Check if the current character is in leet_map */
		for (j = 0; leet_map[j] != '\0'; j++)
		{
			/* Step 3: If a match is found, replace the character */
			if (str[i] == leet_map[j])
			{
				str[i] = leet_replace[j];
				break; /* Exit the inner loop once replaced */
			}
		}
	}

	return (str);
}
