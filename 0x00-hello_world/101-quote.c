#include <stdio.h>
#include <unistd.h>
/**
 * main - print string in put function
 *
 * Description: using the main function
 * Return: 0
 */
int main(void)
{
	write(2, "and that piece of art is usefull\" -Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
