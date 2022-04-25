#include "main.h"

/**
 * *cap_string - capitalizes all words.
 * @str: string value.
 * Return: string.
 */
char *cap_string(char *str)
{
	int i = 1, j, check;
	char a[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};

	if (str[0] > 'a' && str[0] < 'z')
		str[0] -= 32;

	while (str[i] != '\0')
	{
		if (str[i] > 'a' && str[i] < 'z')
		{
			j = 0;
			check = 0;
			while (check == 0 && j < 13)
			{
				if (str[i - 1] == a[j])
				{
					check = 1;
				}
				j++;
			}
			if (check == 1)
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
