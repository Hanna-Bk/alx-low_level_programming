#include <stdio.h>
/**
 * main - a program that prints the first 50 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 * Description: computes and prints the sum of all the multiples of 3 or
 * 5 bellow 1024 (excluded), floowed by a new line
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long num1 = 1, num2 = 2, numx;

	for (i = 0; i <= 49; i++)
	{
		printf("%lu", num1);

		numx = num1 + num2;
		num1 = num2;
		num2 = numx;

		if (i != 49)
			printf(", ");
	}

	printf("\n");

	return (0);
}

15.
#include <stdio.h>

/**
 * main - a program that finds and prints the sum of the even-valued terms
 * Description: computes and prints even numbers < 4,000,000
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int i;

	unsigned long num1 = 1;
	unsigned long num2 = 2;
	unsigned long numx;
	unsigned long sum = 0;

	for (i = 0; i <= 31; i++)
	{
		if (num1 % 2 == 0)
		{
			sum += num1;
		}

		numx = num1 + num2;
		num1 = num2;
		num2 = numx;
	}

	printf("%lu\n", sum);

	return (0);
}
