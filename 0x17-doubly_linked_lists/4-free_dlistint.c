#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - free
 * @head: head linked list
 */

void free_dlistint(dlistint_t *head)
{
	int ln = 0;
	int i;

	while (head != NULL)
	{
		ln++;
		head = head->next;
	}

	if (head != NULL)
	{
		for (i = 0; i < ln; i++)
		{
			free(head);
		}
	}
}
