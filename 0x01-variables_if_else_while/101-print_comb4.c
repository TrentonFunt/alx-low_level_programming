#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations
 * of three digits in ascending order, separated by ",," followed by a space.
 * The three digits must be different.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1;
	int digit2;
	int digit3;

	digit1 = 0;

	while (digit1 <= 7)
	{
		digit2 = digit1 + 1;

		while (digit2 <= 8)
		{
			digit3 = digit2 + 1;

			while (digit3 <= 9)
			{
				putchar(digit1 + '0');
				putchar(digit2 + '0');
				putchar(digit3 + '0');

				if (digit1 != 7)
				{
					putchar(',');
					putchar(' ');
				}

				digit3++;
			}

			digit2++;
		}

		digit1++;
	}

	putchar('\n');

	return (0);
}
