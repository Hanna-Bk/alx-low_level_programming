#include "main.h"

/**
 * main - the program that will print lowercase alphabets
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char h;

	for (h = 'a'; h <= 'z'; h++);
	{
		_putchar(h);
	}
	_putchar('\n');
}
