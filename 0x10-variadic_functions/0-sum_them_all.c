#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Calculate the sum of a variable number of integers.
 * @n: The number of integers to sum.
 *
 * Return: The sum of the integers.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int sum;

sum = 0;

/* If n is 0, return 0 */
if (n == 0)
return (0);

va_start(args, n);

/* Iterate through the list of arguments and add them to sum */
for (i = 0; i < n; i++)
sum += va_arg(args, int);

va_end(args);

return (sum);
}
