#include "main.h"

/**
 * main - Entry point
 *
 * Descriptn: This is the main function that calls `print_last_digit` to print
 * the last digit of a number and returns the result.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int result;

	result = print_last_digit(9876);
	_putchar(result + '0');  /* Print the result */
	_putchar('\n');

	result = print_last_digit(0);
	_putchar(result + '0');  /* Print the result */
	_putchar('\n');

	result = print_last_digit(-12345);
	_putchar(result + '0');  /* Print the result */
	_putchar('\n');

	return (0);
}
