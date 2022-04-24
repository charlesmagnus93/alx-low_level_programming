#include "main.h"

/**
 *leet - encoding.
 *@str: string value.
 *Return: string.
 */

char *leet(char *str)
{
	int i = 0, j = 0;
	char array_leet[] = {'4', '3', '1', '0', '7'};
	char array_up[] = {'A', 'E', 'L', 'O', 'T'};
	char array_low[] = {'a', 'e', 'l', 'o', 't'};

	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == array_low[j] || str[i] == array_up[j])
				str[i] = array_leet[j];
		}
		i++;
	}

	return (str);
}
