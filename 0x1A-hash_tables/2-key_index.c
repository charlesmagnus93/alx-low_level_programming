#include "hash_tables.h"

/**
 * key_index - index of a key.
 * @key: key
 * @size: size
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0, count = 0;

	while (key && key[count])
	{
		index = hash_djb2(key) % size;
		++count;
	}
	return (index);
}
