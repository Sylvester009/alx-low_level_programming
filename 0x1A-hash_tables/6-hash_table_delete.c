#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				tmp = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
