#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase
 *
 * Description: This function prints the lowercase alphabet from 'a' to 'z'
 * using the _putchar function. It adds a space after each letter.
 */
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        _putchar(letter);
        if (letter != 'z') // Add a space after each letter except 'z'
            _putchar(' ');
        letter++;
    }
}
