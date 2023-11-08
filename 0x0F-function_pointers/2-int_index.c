#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function
 * @array: The array to search in
 * @size: The number of elements in the array
 * @cmp: A pointer to the comparison function
 *
 * Return: The index of the first matching element, or -1 if no match or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

/* Check for NULL array and valid size */
if (array != NULL && cmp != NULL && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return i;  /* Return the index of the first matching element */
}
}
}

return -1;  /* No match found or invalid input, return -1 */
}
