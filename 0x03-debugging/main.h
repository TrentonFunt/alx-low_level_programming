#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/* Function prototype for positive_or_negative function */
void positive_or_negative(int i);

/**
 * convert_day - Converts day of the month to the day of the year, without accounting
 * for leap years.
 *
 * @month: The month in number format.
 * @day: The day of the month.
 *
 * Returns: The day of the year.
 */
int convert_day(int month, int day);

/**
 * print_remaining_days - Takes a date and prints how many days are left in the year,
 * accounting for leap years.
 *
 * @month: The month in number format.
 * @day: The day of the month.
 * @year: The year.
 */
void print_remaining_days(int month, int day, int year);

/**
 * main - Entry point for the program
 *
 * Return: Always 0
 */
int main(void);

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c);

#endif /* MAIN_H */
