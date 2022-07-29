#include "hash_tables.h"

/**
 *hash_table_create - Creates a new hash table
 *
 *@size: The size of the new hash table created
 *Return: A pointer to the hash table created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;

	table = malloc(sizeof(*table));
	if (table == NULL)
	{
		free(table);
		return (NULL);
	}
	array = malloc(sizeof(*array) * (size + 1));
	if (array == NULL)
	{
		free(table);
		free(array);
		return (NULL);
	}
	table->size = size;
	table->array = array;
	return (table);
}
