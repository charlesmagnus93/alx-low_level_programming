#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print all elements
 * @h: head linked list
 * Return: int
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
