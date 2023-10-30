#include "main.h"

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-'); /* Step 1: Print the minus sign for negative numbers */
		n = -n;        /* Step 2: Make n positive for further processing */
	}

	/* Step 3: Recursively print each digit of the positive integer */
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	_putchar(n % 10 + '0'); /* Step 4: Print the last digit as a character */
}
