#ifndef MAIN_H
#define MAIN_H

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string to append to dest.
 * @n: The maximum number of bytes from src to use.
 *
 * Description:
 * This function appends the `src` string to the `dest` string, using at most `n` bytes
 * from `src`. If `src` contains `n` or more bytes, it does not need to be null-terminated.
 * The resulting string is properly null-terminated, and a pointer to `dest` is returned.
 */
char *_strncat(char *dest, char *src, int n);

/* Function that concatenates two strings */
char *_strcat(char *dest, char *src);

/* Custom putchar function */
int _putchar(char c);

#endif /* MAIN_H */
