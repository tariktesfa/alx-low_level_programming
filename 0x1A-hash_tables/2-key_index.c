#include "hash_tables.h"

/**
 * key_index - gives you the index of a kay
 * @key: the key
 * @size: size of array
 * Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* check size */
	if (!size)
	{
		return (0);
	}
	return (hash_djb2(key) % size);
}
