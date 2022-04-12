#include <stdio.h>

void _putchar(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	putchar('\n');
}
