#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a function pointer
 * @name: The name to be printed
 * @f: A function pointer that takes a char pointer and prints it
 */
void print_name(char *name, void (*f)(char *))
{

/* Check for NULL and f function */
if (name != NULL && f != NULL)
{
f(name);
}
}
