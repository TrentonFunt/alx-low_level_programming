#include "main.h"

/**
 * _sqrt_recursion - Calculate the natural sqrt of a num using recursion
 * @n: The number for which to calculate the square root
 *
 * Description:
 * This function calculates the natural sqrt of a num 'n' using recursion.
 * If 'n' does not have a natural square root, the function returns -1.
 *
 * Return: The natural square root of 'n', or -1 if 'n' does not have a natural
 * square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /* Error: If 'n' is negative, return -1 */
	}
	else if (n == 0 || n == 1)
	{
		return (n); /* Base case: The square root of 0 or 1 is the number itself */
	}
	else
	{
		return (_sqrt_recursive(n, 2)); /* Start recursion with initial guess of 2 */
	}
}

/**
 * _sqrt_recursive - Helper function for calculating square root recursively
 * @n: The number for which to calculate the square root
 * @guess: The current guess for the square root
 *
 * Return: The natural square root of 'n', or -1 if 'n' does not have a natural
 * square root.
 */
int _sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess); /* Found exact square root */
	}
	else if (guess * guess > n)
	{
		return (-1); /* Error: Guess squared is greater than 'n' */
	}
	else
	{
		return (_sqrt_recursive(n, guess + 1)); /* Try the next guess */
	}
}
