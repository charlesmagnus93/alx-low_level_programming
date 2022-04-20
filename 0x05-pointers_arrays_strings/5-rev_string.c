#include "main.h"

/**
* rev_string - reverse string
* @s: the pointer to string value
*/
void rev_string(char *s)
{
	char tmp;
	int i = 0;
	int j = strlen(s) - 1;

	while (i < j)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		i++;
		j--;
	}
}
