#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix of integers.
 * @size: The size of the matrix (number of rows or columns).
 *
 * Return: This function does not return a value.
 */
void print_diagsums(int *a, int size)
{
	int sum_diag1 = 0; /* Initialize sum for the main diagonal */
	int sum_diag2 = 0; /* Initialize sum for the secondary diagonal */
	int row, col;

	/* Loop through the rows of the matrix */
	for (row = 0; row < size; row++)
	{
		/* Loop through the columns of the matrix */
		for (col = 0; col < size; col++)
		{
			/* Check if the current position is on the main diagonal */
			if (row == col)
				sum_diag1 += a[row * size + col]; /* Add value to sum_diag1 */

			/* Check if the current position is on the secondary diagonal */
			if (row == (size - col - 1))
				sum_diag2 += a[row * size + col]; /* Add value to sum_diag2 */
		}
	}

	/* Print the sum of the main diagonal and the secondary diagonal */
	printf("%d, %d\n", sum_diag1, sum_diag2);
}
