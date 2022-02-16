#include "main.h"

/**
 *print_last_digit - Write a function that prints the last digit of a number.
 *@n the int that extract the last digit
 * Return: last digit value
 */
int print_last_digit(int n)
{
	int h;

	if (n < 0)
		n = -n;

	h = n % 10;

	if (h < 0)
		h = -h;

	_putchar(h + '0');

	return (h);
}
