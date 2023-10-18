#include "main.h"

/**
 * string_toupper - Converts all lowercase letters to uppercase in a string.
 * @str: The input string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* Convert lowercase to uppercase by subtracting 32 */
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
