#include "main.h"

/**
 * main - Entry point
 *
 * Description: This is the main function that calls `print_to_98` to print
 * natural numbers from a given number to 98.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	n = 10;
	print_to_98(n);
	n = 110;
	print_to_98(n);
	n = 98;
	print_to_98(n);

	return (0);
}
