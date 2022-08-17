#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with key
 * @ht: hash table to search in
 * @key: the key
 * Return: val assoc. w/ element or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/* declarations */
	hash_node_t *location;
	unsigned long int index;

	/* check for problems */
	if (!(ht && key && *key))
	{
		return (0);
	}

	/* get the index, get location */
	index = key_index((const unsigned char *)key, ht->size);
	location = ht->array[index];
	/* find the location of key */
	while (location)
	{
		/* if strcmp returns 0 we have found it, or keep moving */
		if (strcmp(location->key, key) == 0)
			return (location->value);
		location = location->next;
	}
	/* not found */
	return (NULL);
}
