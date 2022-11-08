#include <stddef.h>
#include <stdio.h>

/**
 * linear_search - search function
 * @array: array to search in
 * @size: number of elements
 * @value: value to search
 *
 * Return: Index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
		}
	}

	return (-1);

}
