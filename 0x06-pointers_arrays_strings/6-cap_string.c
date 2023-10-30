#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The input string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize = 1; /* Initialize to capitalize the first word */

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			capitalize = 1; /* Set the flag to capitalize the next word */
		}
		else if (capitalize && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32; /* Convert lowercase to uppercase */
			capitalize = 0; /* Reset the flag to avoid further capitalization */
		}
		else
		{
			capitalize = 0; /* Reset the flag for non-lowercase characters */
		}

		i++;
	}

	return (str);
}
