#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc and checks for success
 * @b: The number of bytes to allocate
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

/* pointer to malloc */
ptr = malloc(b);

if (ptr == NULL)
{
exit(70);
}

return (ptr);
}
