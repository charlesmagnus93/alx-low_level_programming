#include <math.h>
#include "main.h"

/**
 * square - is eval
 * @a: value of n
 * @b: interat
 *
 * Return: number
 */
int square(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (square(a, b + 1));
}

/**
 * _sqrt_recursion - square
 * @n: integer
 *
 * Return: in as square val
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
