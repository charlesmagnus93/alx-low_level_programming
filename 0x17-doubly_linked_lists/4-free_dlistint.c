#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - free
 * @head: head linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
