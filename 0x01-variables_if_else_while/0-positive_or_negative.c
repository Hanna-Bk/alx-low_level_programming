#include <stdlin.h>
#include <time.h>
/**
 * betty style function doc for function main goes there
 *  program will assign a random number to a var n
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("n is postive");
	}
	if (n == 0)
	{
		printf("n is zero");
	}
	if (n < 0)
	{
		printf("n is negative")
	}
