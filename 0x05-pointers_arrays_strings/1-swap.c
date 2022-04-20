#include "main.h"

/**
 * swap_int - swap to values
 * @a: the pointer var a
 * @b: the pointer var b
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
