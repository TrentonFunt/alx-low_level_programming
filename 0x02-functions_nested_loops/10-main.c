#include "main.h"

/**
 * main - Entry point
 *
 * Description: This is the main function that calls `add` to add two integers
 * and print the result.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int result;

	result = add(10, 20);
	_putchar(result + '0');  /* Print the result */
	_putchar('\n');

	result = add(-5, 15);
	_putchar(result + '0');  /* Print the result */
	_putchar('\n');

	return (0);
}
