#ifndef MAIN_H
#define MAIN_H

/**
 * print_triangle - prints a triangle in the terminal
 * @size: the size of the triangle
 *
 * Description: This function prints a triangle made of '#' characters
 * with a specified size. If the size is 0 or less, it prints a newline.
 */
void print_triangle(int size);

/**
 * main - Entry point
 *
 * Description: Prints numbers from 1 to 100 following Fizz-Buzz rules.
 * - For multiples of 3, it prints "Fizz".
 * - For multiples of 5, it prints "Buzz".
 * - For numbers that are multiples of both 3 and 5, it prints "FizzBuzz".
 * - Otherwise, it prints the number, separated by spaces.
 * Return: Always 0 (success)
 */
int main(void);

/**
 * print_square - prints a square in the terminal
 * @size: the size of the square
 *
 * Description: This function prints a square made of '#' characters
 * with the specified size. If the size is 0 or less, it prints a newline.
 */
void print_square(int size);

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: the number of times the character '\' should be printed
 *
 * Description: This function draws a diagonal line using '\' characters.
 * The number of '\' characters is determined by the parameter 'n'.
 * If 'n' is 0 or less, the function prints only a newline.
 */
void print_diagonal(int n);

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character '_' should be printed
 *
 * Description: This function draws a straight line using '_' characters.
 * The number of '_' characters is determined by the parameter 'n'.
 * If 'n' is 0 or less, the function prints only a newline.
 */
void print_line(int n);

/**
 * more_numbers - prints numbers from 0 to 14, ten times
 *
 * Description: This function prints numbers from 0 to 14, ten times,
 * followed by a newline.
 */
void more_numbers(void);

/**
 * print_most_numbers - prints the numbers from 0 to 9 (excluding 2 and 4)
 *
 * Description: This function prints the numbers from 0 to 9, exclude 2 and 4,
 * followed by a newline.
 */
void print_most_numbers(void);

/**
 * print_numbers - prints the numbers from 0 to 9 followed by a new line
 *
 * Description: This function prints the numbers from 0 to 9 followed by a newl
 */
void print_numbers(void);

/* Function prototype for _isupper function */
int _isupper(int c);

/* Function prototype for _putchar function */
int _putchar(char c);

/* Function prototype for _isdigit function */
int _isdigit(int c);

/* Function prototype for mul function */
int mul(int a, int b);

/* Function prototype for mul function */
void print_number(int n);
#endif /* MAIN_H */
