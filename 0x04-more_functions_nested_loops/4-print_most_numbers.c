#include "_putchar.h"
/**
 * print_most_numbers - print number from 0 to 9 not 2 and 4.
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c == 50 || c == 52)
			continue;
		_putchar(c);
	}
	_putchar('\n');
}