#include "lists.h"

/**
 * *add_node_end - add new node at end.
 * @head: head linked list.
 * @str: string.
 * Return: address.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	size_t nextChar;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nextChar = 0; str[nextChar]; nextChar++)
		;

	new->len = nextChar;
	new->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (*head);
}
