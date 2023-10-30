#include "main.h"

/**
 * factorial - Calculate the factorial of a given number
 * @n: The number for which to calculate the factorial
 *
 * Description:
 * This function calculates the factorial of a non-negative integer 'n'.
 * Factorial of 0 is defined as 1, and for negative values of 'n', the function
 * returns -1 to indicate an error.
 *
 * Return: The factorial of 'n', or -1 in case of an error.
 */
int factorial(int n)
{
	if (n < 0)
	{
	return (-1); /* Error case: If 'n' is less than 0, return -1 */
	}
	else if (n == 0)
	{
	return (1);  /* Base case: Factorial of 0 is 1 */
	}
	else
	{
	return (n * factorial(n - 1)); /* Recursive case: Calculate the fact */
	}
}
