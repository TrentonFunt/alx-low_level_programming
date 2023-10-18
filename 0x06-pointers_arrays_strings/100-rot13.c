#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int i, j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	/* Step 1: Loop through the input string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Step 2: Check if the current character is an alphabet character */
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			/* Step 3: If a match is found, apply ROT13 encoding */
			if (str[i] == alphabet[j])
			{
				str[i] = rot13[j];
				break; /* Exit the inner loop once encoded */
			}
		}
	}

	return (str);
}
