#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/* Function prototype for _putchar (if you're using it) */
int _putchar(char c);

/* Function prototype for the print_name function */
void print_name(char *name, void (*f)(char *));

/* Function prototype for the array_iterator function */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - Searches for an integer in an array using a comparison function
 * @array: The array to search in
 * @size: The number of elements in the array
 * @cmp: A pointer to the comparison function
 *
 * Return: The index of the first matching element, or -1 if no match or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */
