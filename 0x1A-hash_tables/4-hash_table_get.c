#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht:  hash table to look into.
 * @key: The key to look for
 *
 * Return: value associated with the element.
 *         Otherwise - NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	current = ht->array[index];
	while (current && strcmp(current->key, key) != 0)
		current = current->next;

	return ((current == NULL) ? NULL : current->value);
}
