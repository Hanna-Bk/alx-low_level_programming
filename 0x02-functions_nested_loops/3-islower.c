#include "main.h"
/**
 * _islower - function to check for lowercase character
 * @c: variable to accept character
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
}

	else
		return (0);
}
