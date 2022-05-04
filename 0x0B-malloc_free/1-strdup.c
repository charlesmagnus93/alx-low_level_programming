#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - copy string
 * @str: given string
 *
 * Return: arr
 */

char *_strdup(char *str)
{

	int i;
	char *s;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		i++;
		s = malloc(sizeof(char) * i);
	}

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];

	s[i] = '\0';
	return (s);
}
