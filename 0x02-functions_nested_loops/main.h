#ifndef MAIN_H
#define MAIN_H

/* Function prototype for _putchar function */
int _putchar(char c);

/* Add prototypes for other functions you intend to use */
/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - Print the alphabet ten times in lowercase
 */
void print_alphabet_x10(void);

/**
 * _islower - Check if a character is lowercase
 *
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c);
#endif /* MAIN_H */
