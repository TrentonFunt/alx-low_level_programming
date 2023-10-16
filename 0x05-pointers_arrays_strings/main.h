#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
/**
 * puts2 - Prints every other character of a string, starting with the first character.
 * @str: The string to be printed.
 */
void puts2(char *str);

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s);

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s);

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str);

int _putchar(char c);  /* Prototype for the _putchar function */

/**
 * reset_to_98 - Updates the value pointed to by a pointer to 98
 * @n: A pointer to an integer
 */
void reset_to_98(int *n);

/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */
void swap_int(int *a, int *b);

/**
 * _strlen - Returns the length of a string
 * @s: The string to be measured
 * Return: The length of the string
 */
int _strlen(char *s);


#endif /* MAIN_H */
