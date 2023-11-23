#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of char 0 and 1.
 *
 * Return: The converted number, or 0 if there is one or more chars
 *         in the string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	/* Check if string is Null */
	if (b == NULL)
		return (0);

	/* Iterate through string and check if char is 0 or 1 */
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = (result << 1) | (*b++ - '0');
	}

	return (result);
}
