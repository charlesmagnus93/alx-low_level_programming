#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create array of char
 * @size: array size
 * @c: char val
 *
 * Return: arr
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size <= 0)
		return (0);

	str = malloc(sizeof(char) * size);

	if (str == 0)
		return (0);

	for (i = 0; i < size; i++)
		*(str + i) = c;

	*(str + i) = '\0';

	return (str);
}
