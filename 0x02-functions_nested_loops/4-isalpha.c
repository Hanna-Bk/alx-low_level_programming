#include "main.h"
/**
 * main - function to check if c is a letter, lowercase or uppercase
 * Return: 0
 */
int _isalpha(int c)
{
	char c;
	
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

	{
		return (1);
	}
	else
		return (0);
}
