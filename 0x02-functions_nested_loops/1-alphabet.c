#include "main.h"

/**
 * main - Entry point
 *
 * Description: This is the main function that calls print_alphabet to print
 * the alphabet in lowercase followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');

	return (0);
}

/**
 * print_alphabet - Print the alphabet in lowercase
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
}
