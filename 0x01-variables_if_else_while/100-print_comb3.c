#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations
 * of two digits in ascending order, separated by ",," followed by a space.
 * The two digits must be different.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1;
	int digit2;

	digit1 = 0;

	while (digit1 <= 8)
	{
		digit2 = digit1 + 1;

		while (digit2 <= 9)
		{
			putchar(digit1 + '0');
			putchar(digit2 + '0');

			if (digit1 != 8)
			{
				putchar(',');
				putchar(' ');
			}

			digit2++;
		}

		digit1++;
	}

	putchar('\n');

	return (0);
}
