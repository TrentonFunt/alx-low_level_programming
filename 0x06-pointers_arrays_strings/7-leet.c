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
	char leet_map[10] = "AaEeOoTtLl";
	char leet_replace[10] = "44330771";

	/* Step 1: Loop through the input string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Step 2: Loop through the leet_map array to find matches */
		for (j = 0; leet_map[j] != '\0'; j++)
		{
			/* Step 3: Check for matches and replace if found */
			if (str[i] == leet_map[j])
			{
				str[i] = leet_replace[j];
				break; /* Exit the inner loop once replaced */
			}
		}
	}

	return (str);
}
