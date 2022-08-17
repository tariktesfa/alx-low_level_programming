#include "hash_tables.h"

/**
 * hash_table_print - a func what prints the hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	/*declarations */
	unsigned long int iterate;
	unsigned int flag = 0;
	hash_node_t *location;

	/* checking for a table */
	if (!ht)
		return;
	/* print opening brace */
	printf("{");
	/* iterate through hash table unless it's the end */
	for (iterate = 0; iterate < ht->size; iterate++)
	{
		location = ht->array[iterate];
		while (location)
		{
			/* flag off until first item is printed */
			if (flag)
				printf(", ");
			printf("'%s': '%s'", location->key, location->value);
			flag = 1;
			location = location->next;
		}
	}
	/* print closing brace & newline */
	printf("}\n");
}
