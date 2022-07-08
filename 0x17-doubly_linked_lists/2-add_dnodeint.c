#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add at beginning
 * @head: head linked list
 * @n: value to add
 * Return: pointer
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (tmp != NULL)
	{
		tmp->prev = NULL;
		tmp->n = n;
		tmp->next = NULL;
		tmp->next = (*head);
		if ((*head) != NULL)
			(*head)->prev = tmp;
		(*head) = tmp;
		return (tmp);
	}
	else
	{
		return (NULL);
	}
}
