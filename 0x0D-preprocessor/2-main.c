#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This program prints the name of the file it was comp from,fol by a new line.
 * It demos the usage of the __FILE__ predef macro to retrieve the filename.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
