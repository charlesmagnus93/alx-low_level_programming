#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - allocate memory.
 *@b: memory size
 *Return: pointer;
 **/

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (p);
}
