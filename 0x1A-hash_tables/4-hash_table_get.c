#include "hash_tables.h"

/**
 * hash_table_get - retrieves value
 * @ht: hash table to look into
 * @key: the key
 * Return: value associated with keyelse null
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx;
	hash_node_t *tempNode;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);

	for (tempNode = ht->array[indx]; tempNode != NULL; tempNode = tempNode->next)
	{
		if (strcmp(tempNode->key, key) == 0)
			return (tempNode->value);
	}

	return (NULL);
}
