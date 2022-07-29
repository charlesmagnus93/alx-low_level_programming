#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * *hash_table_create - create hash table
 *@size: size of array
 *
 * Return: pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size < 1)
		return (NULL)

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL)

	table->size = size;
	table->array = malloc(sizeof(hash_node_t));
	if (table->array == NULL)
		return (NULL);
	return (table->array);
}
