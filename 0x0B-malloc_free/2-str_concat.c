#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concate two stri,g
 * @s1: string one
 * @s2: string two
 *
 * Return: string
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, j = 0, k = 0;

	if (s1 != NULL)
		for (; s1[i]; i++)
		;
	if (s2 != NULL)
		for (; s2[j]; j++)
		;

	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);

	while (k < i)
	{
		s[k] = s1[k];
		k++;
	}

	while (k < i + j)
	{
		s[k] = s2[k - i];
		k++;
	}
	s[k] = '\0';
	return (s);
}
