#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print sum
 *
 * @a: array
 * @size: array size
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (j = 0, i = size - 1; j < (size * size); j += size + 1, i += size - 1)
	{
		sum1 += a[j], sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
