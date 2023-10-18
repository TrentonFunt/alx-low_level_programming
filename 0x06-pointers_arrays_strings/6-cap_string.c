#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The input string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (i == 0 || strchr(separators, str[i - 1]) != NULL)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				/* Convert lowercase to uppercase by subtracting 32 */
				str[i] = str[i] - 32;
			}
		}
		i++;
	}

	return (str);
}
