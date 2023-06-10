#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tempNode;
	unsigned long int indx;

	indx = 0;

	if (ht == NULL)
	{
		return;
	}
	else
	{
		while (indx < ht->size)
		{
			while (ht->array[indx])
			{
				tempNode = ht->array[indx];
				ht->array[indx] = ht->array[indx]->next;

				if (tempNode->value != NULL)
					free(tempNode->value);
				if (tempNode->key != NULL)
					free(tempNode->key);
				free(tempNode);
			}
			free(ht->array[indx]);
			indx++;
		}
		free(ht->array);
		free(ht);
	}
}
