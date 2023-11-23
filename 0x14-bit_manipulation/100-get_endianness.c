#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	/* Create a 4-byte integer with a known pattern */
	long num = 0x01020304;

	/* Cast the integer to a character pointer */
	char *byte_ptr = (char *)&num;

	/* If the first byte (lowest memory address) is 0x04, it's little-endian */
	/* Otherwise, it's big-endian */
	return (*byte_ptr == 0x04);
}
