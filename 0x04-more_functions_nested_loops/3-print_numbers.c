#include "_putchar.h"
/**
 * print_numbers - print number from 0 to 9.
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++) {
		_putchar(c);
	}
	_putchar('\n');
}
