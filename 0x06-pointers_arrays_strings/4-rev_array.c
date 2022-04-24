#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverse int array
 * @a: integer array
 * @n: array length
 */
void reverse_array(int *a, int n)
{
	int i;

	i = 0;

	for (i = 1; i <= n; i++)
	{
		if (i != 1)
			printf(", ");
		printf("%d", a[n - i]);
	}
	printf("\n");
}
