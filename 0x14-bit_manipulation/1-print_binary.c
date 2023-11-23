#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
    /* If the number is greater than 1, call the function recursively */
	if (n > 1)
		print_binary(n >> 1);

    /* Print (1 or 0) based on the least signif bit of the original number */
	_putchar((n & 1) ? '1' : '0');
}
