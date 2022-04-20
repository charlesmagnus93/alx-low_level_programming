#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - print password.
 *
 * Return: 0.
 */

int main(void)
{
	int ascii = 2772;
	int i = 0;
	int j, random;
	char pwd[100];
	time_t t;

	srand((int) time(&t));
	while (ascii > 126)
	{
		random = rand() % 126;
		pwd[i] = random;
		ascii -= random;
		i++;
	}
	if (ascii > 0)
		pwd[i] = ascii;
	else
	{
		i--;
	}

	for (j = 0; j <= i; j++)
	{
		printf("%c", pwd[j]);
	}
	return (0);
}
