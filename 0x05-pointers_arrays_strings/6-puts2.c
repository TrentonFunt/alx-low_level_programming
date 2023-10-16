#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first character.
 * @str: The string to be printed.
 */
void puts2(char *str)
{
	/* Initialize the index */
	int i = 0;

	while (str[i] != '\0')
	{
		/* Print the current character */
		_putchar(str[i]);
		
		/* Move to every other character */
		i += 2;
	}

	/* Print a new line */
	_putchar('\n');
}
