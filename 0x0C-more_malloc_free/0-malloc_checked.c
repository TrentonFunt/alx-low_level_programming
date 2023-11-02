#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The size of the memory to allocate
 *
 * Return: A pointer to the allocated memory
 *         If malloc fails, the program terminates with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	/* Allocate memory using malloc */
	void *ptr = malloc(b);

	/* Check if malloc failed */
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
