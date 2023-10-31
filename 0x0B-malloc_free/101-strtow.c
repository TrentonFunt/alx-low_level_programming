#include "main.h"
#include <stdlib.h>

int countWords(char *str);
char *copyWord(char *str, int start, int end);

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: On success, a pointer to an array of strings (words).
 * Returns NULL if str is NULL, str is empty, or if memory alloc fails.
 */
char **strtow(char *str)
{
	char **words;
	int i, k, wordCount = 0, wordStart = -1;

	/* Check if str is NULL or empty */
	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}

	wordCount = countWords(str);

	/* Allocate memory for the array of words */
	words = (char **)malloc((wordCount + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}

	/* Parse the input string to extract words */
	for (i = 0, k = 0; str[i]; i++)
	{
		if (str[i] != ' ' && wordStart == -1)
		{
			wordStart = i;
		}
		else if ((str[i] == ' ' || str[i + 1] == '\0') && wordStart != -1)
		{
			words[k++] = copyWord(str, wordStart, i);
			wordStart = -1;
		}
	}

	words[k] = NULL; /* Set the last element to NULL to terminate the array */

	return (words);
}

/**
 * countWords - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words in the string
 */
int countWords(char *str)
{
	int i, wordCount = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			wordCount++;
		}
	}

	return (wordCount);
}

/**
 * copyWord - Copies a word from the input string
 * @str: The input string
 * @start: The starting index of the word
 * @end: The ending index of the word
 *
 * Return: A pointer to the copied word as a new string
 */
char *copyWord(char *str, int start, int end)
{
	char *word;
	int i, j = 0;

	word = (char *)malloc((end - start + 2) * sizeof(char));
	if (word == NULL)
	{
		return (NULL);
	}

	for (i = start; i <= end; i++)
	{
		word[j++] = str[i];
	}

	word[j] = '\0';

	return (word);
}
