#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tempNode;
	unsigned long int indx;
	char *comma;

        indx = 0;
        comma = "";

	if (ht == NULL)
	{
                return;
	}
        else
        {
		printf("{");
		while (indx < ht->size)
		{
			tempNode = ht->array[indx];

			while (tempNode)
			{
				printf("%s", comma);
				comma = ", ";

				if (tempNode->key)
                                {
					printf("'%s': '%s'", tempNode->key, tempNode->value);
                                }
				tempNode = tempNode->next;
			}
			indx++;
		}
		printf("}\n");
        }
}