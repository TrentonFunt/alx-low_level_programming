#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string to be printed.
 */
void puts2(char *str)
{
	int i = 0;
	int t = 0;
	char *y = str;
	int o;

	/* Calculate the length of the string */
	while (*y != '\0')
	{
		y++;   /* Move the pointer to the next character */
		i++;   /* Increment the character count */
	}
	t = i - 1;  /* Calculate the last valid index of the string */

	/* Print every other character */
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)   /* Check if the index is even */
		{
			_putchar(str[o]);  /* Print the character if the index is even */
		}
	}

	_putchar('\n');  /* Print a newline character to end the output */
}
