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
	return (_sqrt_recursive(n, 2, n));
}

/**
 * _sqrt_recursive - Recursive helper function for calculating square root
 * @n: The number for which to calculate the square root
 * @guess: The current guess for the square root
 * @orig: The original value of 'n'
 *
 * Return: The natural square root of 'n', or -1 if 'n' does not have a natural
 * square root.
 */
int _sqrt_recursive(int n, int guess, int orig)
{
	if (guess * guess == orig)
	{
		return (guess); /* Found exact square root */
	}
	else if (guess * guess > orig)
	{
		return (-1); /* Error: Guess squared is greater than 'n' */
	}
	else
	{
	return (_sqrt_recursive(n, guess + 1, orig)); /* Try the next guess */
	}
}
