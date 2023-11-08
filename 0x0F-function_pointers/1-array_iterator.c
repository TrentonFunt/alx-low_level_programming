#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array to iterate through
 * @size: The size of the array
 * @action: Pointer to the function to execute on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

/* Initialize  size_t */
size_t i;

/* Check for NULL array and action function */
if (array != NULL && action != NULL)

{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
