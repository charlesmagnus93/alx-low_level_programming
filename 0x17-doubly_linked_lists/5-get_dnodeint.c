#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *get_dnodeint_at_index - nth node
 * @head: node pointer
 * @index: index of node
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *cNode;

	i = head;
	for (i = 0; node != NULL; i++)
	{
		if (i == index)
			return (cNode);
		cNode = cNode->next;
	}
	return (NULL);
}
