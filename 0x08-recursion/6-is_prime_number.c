#include <math.h>

/**
 * prime - evaluate
 * @a: same number as n
 * @b: iterate
 *
 * Return: integer
 */
int prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime(a, b + 1));
}

/**
 * is_prime_number - prime number
 * @n: integer
 *
 * Return: in as square val
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
