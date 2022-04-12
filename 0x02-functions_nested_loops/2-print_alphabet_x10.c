#include <stdio.h>
#include "_putchar.h"
/**
 * print_alphabet_x10 - Print alphabet x 10
 *
 */
void print_alphabet_x10(void)
{
	int a, c;

	for (a = 0; a < 10; a++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		putchar('\n');
	}
}
