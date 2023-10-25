#include "main.h"

/**
 * find_sqrt - Recursive helper function to find the square root
 * @n: The number for which to find the square root
 * @x: The current estimate of the square root
 *
 * Return: The square root of 'n'.
 */
int find_sqrt(int n, int x); /* Function declaration for find_sqrt */

/**
 * _sqrt_recursion - Calculate the natural sqrt of a number using recursion
 * @n: The number for which to calculate the square root
 *
 * Description:
 * This function calculates the natural sqrt of a non-negative integer 'n'.
 * If 'n' does not have a natural square root, the function returns -1.
 *
 * Return: The natural square root of 'n', or -1 in case of an error.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /* Error case: If 'n' is negative, return -1 */
	}
	else if (n == 0 || n == 1)
	{
		return (n);  /* Base case: The square root of 0 or 1 is the number itself */
	}
	else
	{
		return (find_sqrt(n, 2)); /* Call helper function to find the square root */
	}
}

/**
 * find_sqrt - Recursive helper function to find the square root
 * @n: The number for which to find the square root
 * @x: The current estimate of the square root
 *
 * Return: The square root of 'n'.
 */
int find_sqrt(int n, int x)
{
	if (x * x == n)
	{
		return (x); /* The current estimate is the square root */
	}
	else if (x * x > n)
	{
		return (-1); /* No natural square root exists for 'n' */
	}
	else
	{
		return (find_sqrt(n, x + 1)); /* Increment the estimate and continue */
	}
}
