#include <string.h>
#include "main.h"

/**
 * print_rev - reverse string
 * @s: the pointer to string value
 */
void print_rev(char *s)
{
	int i, len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
