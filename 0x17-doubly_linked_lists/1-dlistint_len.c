#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - print lenth
 * @h: head linked list
 * Return: int
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
