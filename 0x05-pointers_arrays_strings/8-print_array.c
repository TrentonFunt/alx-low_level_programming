#include "main.h"

/**
 * print_array - Prints n elements of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		/* Print the current element */
		printf("%d", a[i]);

		/* Add a comma and space, except for the last element */
		if (i < n - 1)
		{
			printf(", ");
		}
	}

	/* Print a new line at the end */
	printf("\n");
}
