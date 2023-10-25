#include "main.h"

/**
 * check_palindrome - Recursive helper function to check palindromicity
 * @s: The string to be checked for palindromicity
 * @start: The starting index of the substring to check
 * @end: The ending index of the substring to check
 *
 * Return: 1 if 's' is a palindrome, 0 if it is not.
 */
int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The string to be checked
 *
 * Description:
 * This function checks whether the given string 's' is a palindrome.
 * A palindrome is a word, phrase,
 * or sequence of characters that reads the same
 * forwards and backward (ignoring spaces, punctuation, and capitalization).
 *
 * Return: 1 if 's' is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	if (length <= 1)
	{
		return (1); /* An empty string or single-character string is a palindrome */
	}
	else
	{
		return (check_palindrome(s, 0, length - 1)); /* Call a helper function */
	}
}

/**
 * check_palindrome - Recursive helper function to check palindromicity
 * @s: The string to be checked for palindromicity
 * @start: The starting index of the substring to check
 * @end: The ending index of the substring to check
 *
 * Return: 1 if 's' is a palindrome, 0 if it is not.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1); /* If we've checked the whole string, it is a palindrome */
	}
	else if (s[start] != s[end)
	{
		return (0); /* If char at 'start' and 'end' don't match,not a palindrome */
	}
	else
	{
		return (check_palindrome(s, start + 1, end - 1)); /* Check the next pair */
	}
}
