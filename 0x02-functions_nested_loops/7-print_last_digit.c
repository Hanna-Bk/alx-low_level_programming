#include "main.h"

/**
 * print_last_digit - a function that prints tha last digit
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		n = -n;
	ld = n % 10;
	if (ld < 0)
		ld = -ld;
	_putchar(id + '0');

	return (ld);
}
