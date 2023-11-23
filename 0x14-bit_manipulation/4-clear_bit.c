#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a the given index.
 * @n: A pointer to the number in which to clear the bit.
 * @index: The index of the bit to clear (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is valid */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/* Use '&' and '~' of the bit at the specified index to set it to 0 */
	*n &= ~(1UL << index);

	return (1);
}
