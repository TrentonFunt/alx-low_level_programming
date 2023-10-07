#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all single-digit numbers of base 10,
 * starting from 0, followed by a new line, without using char variables.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	digit = 48; /* ASCII value of '0' */

	while (digit <= 57) /* ASCII value of '9' */
	{
		putchar(digit);
		digit++;
	}

	putchar('\n');

	return (0);
}
