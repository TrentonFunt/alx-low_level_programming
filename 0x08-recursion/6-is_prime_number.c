#include "main.h"

/**
 * is_prime_number - Check if an integer is a prime number
 * @n: The integer to be checked
 *
 * Description:
 * This function checks if the input integer 'n' is a prime number.
 *
 * Return: 1 if 'n' is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0); /* 0 and 1 are not prime numbers */
	}
	else if (n <= 3)
	{
		return (1); /* 2 and 3 are prime numbers */
	}
	else if (n % 2 == 0 || n % 3 == 0)
	{
		return (0); /* Multiples of 2 and 3 are not prime numbers */
	}
	else
	{
		return (is_prime_recursive(n, 5)); /* Start recursion with divisor 5 */
	}
}

/**
 * is_prime_recursive - Helper function checking prime num recursively
 * @n: The integer to be checked
 * @divisor: The current divisor to check for divisibility
 *
 * Return: 1 if 'n' is a prime number, 0 if 'n' is not prime.
 */
int is_prime_recursive(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1); /* We've checked all possible divisors, 'n' is prime */
	}
	if (n % divisor == 0)
	{
		return (0); /* 'n' is divisible by the current divisor, not prime */
	}
	return (is_prime_recursive(n, divisor + 2)); /* Try the next odd divisor */
}
