#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to update
 * @key: the key
 * @value: value associated with key
 * Return: 1 on success else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *tempNode;
	unsigned long int indx;

	if (key == 0 || ht == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(node);
		return (0);
	}

	node->value = strdup(value);
	node->key = strdup(key);
	indx = key_index((void *)key, ht->size);

	tempNode = ht->array[indx];
	if (ht->array[indx] != NULL)
	{
		tempNode = ht->array[indx];
		while (tempNode != NULL)
		{
			if (strcmp(tempNode->key, node->key) == 0)
				break;
			tempNode = tempNode->next;
		}
		if (tempNode == NULL)
		{
			node->next = ht->array[indx];
			ht->array[indx] = node;
		}
	}
	else
	{
		node->next = NULL;
		ht->array[indx] = node;
	}
	return (1);
}
