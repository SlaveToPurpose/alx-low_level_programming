#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: Size of array
 * Return: Pointer to the hash table else return null
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table->array);
		free(table);
		return (NULL);
	}

	memset(table->array, 0, sizeof(hash_table_t));

	return (table);
}

