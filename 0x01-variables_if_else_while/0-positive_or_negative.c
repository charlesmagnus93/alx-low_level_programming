#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entrypoint
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%i is zero");
	} else if (n > 0)
	{
		printf("%i is positive");
	} else
	{
		printf("%i is negative");
	}
	return (0);
}
