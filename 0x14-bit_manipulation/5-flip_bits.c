#include "main.h"

/**
 * flip_bits - Returns number of bits to flip to get from one num to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* Calculate XOR to find different bits */
	unsigned long int xor_result = n ^ m;
	unsigned int num_of_bits = 0;

	while (xor_result)
	{
		/* Use '&' with 1 to check the least significant bit */
		num_of_bits += xor_result & 1;
		/* Right shift the xor_result to check the next bit */
		xor_result >>= 1;
	}

	return (num_of_bits);
}
