#include "hash_tables.h"

/**
 *hash_table_get - Retrieves a value associated with a key
 *
 *@ht: The hash table being queried
 *@key: The key being searched for
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int node_index;
	hash_node_t *node;

	node_index = key_index((unsigned char *)key, ht->size);
	node = (ht->array)[node_index];
	if (!node)
		return (NULL);
	while (node->next && (strcmp(node->key, key) != 0))
	{
		node = node->next;
	}
	if (strcmp(node->key, key) == 0)
	{
		return (node->value);
	}
	return (NULL);
}