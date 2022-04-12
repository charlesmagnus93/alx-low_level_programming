#include <stdio.h>
#include "_putchar.h"
/**
 * print_alphabet - Print alphabet
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; ++c)
	{
		_putchar(c);
	}
	putchar('\n');
}
