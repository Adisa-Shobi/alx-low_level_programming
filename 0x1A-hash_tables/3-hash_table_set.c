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


	if (strlen(key) == 0)
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
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (array[node_index])
		add_to_node(array[node_index], new_node);
	else
	{
		array[node_index] = new_node;
	}
	return (1);
}

/**
 *add_to_node - Adds to the already existing node in case of collision
 *
 *@node: The node to be appended to
 *@new_node: The new node being added
 *Return: 1 if succesful, 0 otherwise
 */
void add_to_node(hash_node_t *node, hash_node_t *new_node)
{
	while (node->next)
	{
		node = node->next;
	}
	node->next = new_node;
}
