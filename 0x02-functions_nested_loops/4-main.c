#include "main.h"

/**
 * main - Entry point
 *
 * Description: This is the main function that calls _isalpha to check if
 * a character is an alphabetic character and prints the result.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int result;

	result = _isalpha('a');
	_putchar(result + '0');  /* Print the result (0 or 1) */
	_putchar('\n');

	result = _isalpha('A');
	_putchar(result + '0');  /* Print the result (0 or 1) */
	_putchar('\n');

	result = _isalpha('1');
	_putchar(result + '0');  /* Print the result (0 or 1) */
	_putchar('\n');

	return (0);
}
