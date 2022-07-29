#include "hash_tables.h"

/**
 *hash_table_set - Stores a key value pair in the hash table
 *@ht: A pointer to the hash table structure
 *@key: Key is the key of the key value pair
 *@value: The value of the key value pair
 *Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *node;
	unsigned long int node_index;
	hash_node_t **array;


	if (strlen(key) == 0 || !key || !ht)
		return (0);
	node_index = key_index((unsigned char *)key, ht->size);
	array = ht->array;
	if (array[node_index])
	{
		node = array[node_index];
		while (node)
		{
			if (strcmp(key, node->key) == 0)
			{
				free(node->value);
				node->value = strdup(value);
				return (1);
			}
			node = node->next;
		}
	}
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->key = (char *)key;
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (array[node_index])
	{
		new_node->next = array[node_index];
		array[node_index] = new_node;
	}
	else
		array[node_index] = new_node;
	return (1);
}
