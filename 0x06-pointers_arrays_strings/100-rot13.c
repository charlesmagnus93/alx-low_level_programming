#include "main.h"

/**
 * *rot13 - encoding a string using rot13.
 * @str: string value.
 * Return: array.
 */
char *rot13(char *str)
{
	int i = 0, j = 0;
	char string_rot13[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	char string_alpha[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

	while (str[i] != '\0')
	{
		do {
			if (str[i] == string_alpha[j])
			{
				str[i] = string_rot13[j];
				break;
			}
			j++;
		} while (string_alpha[j] != '\0');
		j = 0;
		i++;
	}

	return (str);
}
