#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	/* declarations */
	hash_node_t *location, *freeable;
	unsigned long int iterate;

	/* check to see if there is a table */
	if (!ht)
		return;
	/* iterate through and free it all, baby */
	for (iterate = 0; iterate < ht->size; iterate++)
	{
		location = ht->array[iterate];
		while (location)
		{
			/* free contents without losing our location */
			freeable = location;
			location = location->next;
			free(freeable->key);
			free(freeable->value);
			free(freeable);
			/* start over unless !location */
		}
	}
	/* now free the table */
	free(ht->array);
	free(ht);
}
