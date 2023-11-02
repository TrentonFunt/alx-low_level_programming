#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from min to max
 * @min: The minimum value (included)
 * @max: The maximum value (included)
 *
 * Return: A pointer to the newly created array of integers
 * Returns NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
	int *array, i, total_size;

	/* Check if min is greater than max */
	if (min > max)
		return (NULL);

	/* Calculate the number of elements in the array */
	total_size = max - min + 1;

	/* Allocate memory using malloc */
	array = malloc(total_size * sizeof(int));

	/* Check if malloc failed */
	if (array == NULL)
		return (NULL);

	/* Initialize the array with values from min to max */
	for (i = 0; i < total_size; i++)
		array[i] = min + i;

	return (array);
}
