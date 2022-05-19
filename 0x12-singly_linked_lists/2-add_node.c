#include "lists.h"

/**
 * *add_node - add new node.
 * @head: head linked list.
 * @str: string.
 * Return: address.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nextChar;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nextChar = 0; str[nextChar]; nextChar++);

	new->len = nextChar;
	new->next = *head;
	*head = new;

	return (*head);
}
