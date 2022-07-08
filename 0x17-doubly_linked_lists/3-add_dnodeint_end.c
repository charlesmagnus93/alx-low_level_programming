#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - add at end
 * @head: head linked list
 * @n: value to add
 * Return: pointer
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (new != NULL)
	{
		new->next = NULL;
		new->n = n;

		temp = *head;

		if ((*head) == NULL)
		{
			new->prev = NULL;
			(*head) = new;
			return (new);
		}

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
		return (temp);
	}
	else
	{
		return (NULL);
	}
}
