#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 *
 * Return: On success, 1 is returned. On error, -1 is returned, and errno is set
 *         appropriately.
 */
int _putchar(char c);

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory area.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the memory area `s`.
 */
char *_memset(char *s, char b, unsigned int n);

/* Add prototypes for your custom functions here */

#endif /* MAIN_H */
