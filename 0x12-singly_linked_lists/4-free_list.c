#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head linked list
 */

void free_list(list_t *head)
{
	list_t *first;

	while ((first = head) != NULL)
	{
		head = head->next;
		free(first->str);
		free(first);
	}
}
