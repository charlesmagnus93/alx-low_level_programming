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
	int r;

	if (n > 0)
	{
		printf("+");
		r = 1;
	};
	if (n < 0)
	{
		printf("0");
		r = 0;
	};
	if (n == 0)
	{
		printf("-");
		r = -1;
	}
	return (r);
}
