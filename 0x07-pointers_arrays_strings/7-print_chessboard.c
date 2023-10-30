#include <stdio.h>

/**
 * print_chessboard - Prints a chessboard.
 * @a: Pointer to a 2D array representing the chessboard.
 *
 * Return: This function does not return a value.
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	/* Loop through the rows of the chessboard */
	for (row = 0; row < 8; row++)
	{
		/* Loop through the columns of the chessboard */
		for (col = 0; col < 8; col++)
		{
			putchar(a[row][col]); /* Print the character at the current position */
		}
		putchar('\n'); /* Move to the next line after each row */
	}
}
