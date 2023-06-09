#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: size of the array
 * Return: pointer to newly created hash table else Null
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size < 1)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table)
	{
		table->size = size;
		table->array = malloc(sizeof(hash_table_t));
		if (table->array == NULL)
		{
			free(table->array);
			free(table);
			return (NULL);
		}

		memset(table->array, 0, sizeof(hash_table_t));
	}

	return (table);
}