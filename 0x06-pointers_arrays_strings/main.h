#ifndef MAIN_H
#define MAIN_H
/**
 * string_toupper - Converts all lowercase letters to uppercase in a string.
 * @str: The input string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str);

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n);

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return:
 * 0 if the strings are equal.
 * A positive value if s1 is greater than s2.
 * A negative value if s1 is less than s2.
 */
int _strcmp(char *s1, char *s2);

/**
 * _strncpy - Copies a string, up to 'n' characters, from src to dest.
 * @dest: The destination string.
 * @src: The source string to copy from.
 * @n: The maximum number of characters to copy from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n);

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
