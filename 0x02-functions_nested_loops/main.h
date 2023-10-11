#ifndef MAIN_H
#define MAIN_H

/* Function prototype for _putchar function */
int _putchar(char c);

/* Add prototypes for other functions you intend to use */
/**
 * print_to_98 - Print natural numbers from n to 98
 *
 * @n: The starting number
 */
void print_to_98(int n);

/**
 * add - Add two integers and return the result
 *
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The sum of a and b
 */
int add(int a, int b);

/**
 * times_table - Print the times table in the specified format
 */
void times_table(void);

/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 */
void jack_bauer(void);

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

/**
 * _isalpha - Check if a character is an alphabetic character
 *
 * @c: The character to be checked
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise
 */
int _isalpha(int c);

/**
 * print_sign - Print the sign of a number
 *
 * @n: The number to be checked
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than 0
 */
int print_sign(int n);

/**
 * _abs - Compute the absolute value of an integer
 *
 * @n: The integer to compute the absolute value of
 *
 * Return: The absolute value of n
 */
int _abs(int n);

/**
 * print_last_digit - Print the last digit of a number
 *
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n);
#endif /* MAIN_H */
