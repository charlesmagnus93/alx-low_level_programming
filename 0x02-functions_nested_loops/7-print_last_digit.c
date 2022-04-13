#include "_putchar.h"
/**
 * print_last_digit - The last digit
 * @n: value to verify
 *
 * Return: The last digit.
 */
/* last digit */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}
