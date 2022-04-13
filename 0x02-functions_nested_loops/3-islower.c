#include <ctype.h>
/*
 * _islower - Function that putchar is lower.
 * @c: int value to check.
 *
 * Return: 1 or 0 .
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
