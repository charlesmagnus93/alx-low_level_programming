#include <string.h>
#include "main.h"

/**
 * *string_toupper - string to upper
 * @str: string  value
 * Return: array
 */
char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}

	return (str);
}
