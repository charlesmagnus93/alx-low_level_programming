#include <stdio.h>
/**
 * print_sign - Verify if number is greater or less
 * @n: value to verify
 *
 * Return: 1 if greater, -1 if less and 0 if 0.
 */
/* verify if greater or less */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	} else if (n < 0)
	{
		printf("0");
		return (0);
	} else
	{
		printf("-");
		return (-1);
	}
}
