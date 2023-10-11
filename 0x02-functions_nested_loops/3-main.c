#include "main.h"

/**
 * main - Entry point
 *
 * Description: This is the main function that calls _islower to check
 * if a character is lowercase and prints the result.
 *
 * Return: 0 (Success)
 */
int main(void)
{
    int result;

    result = _islower('a');
    _putchar(result + '0');  /* Print the result (0 or 1) */
    _putchar('\n');

    result = _islower('A');
    _putchar(result + '0');  /* Print the result (0 or 1) */
    _putchar('\n');

    return (0);
}
