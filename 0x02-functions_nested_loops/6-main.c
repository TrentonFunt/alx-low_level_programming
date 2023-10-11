#include "main.h"

/**
 * main - Entry point
 *
 * Description: This is the main function that calls `_abs` to compute
 * the absolute value of an integer and prints the result.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int result;

	result = _abs(-10);
	_putchar(result + '0');  /* Print the result */
	_putchar('\n');

	result = _abs(5);
	_putchar(result + '0');  /* Print the result */
	_putchar('\n');

	result = _abs(0);
	_putchar(result + '0');  /* Print the result */
	_putchar('\n');

	return (0);
}
