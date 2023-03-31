#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: pointer to head of the list to be freed
 */

void free_list(list_t *head)
{
	list_t *tempVar;

	for (tempVar = head; tempVar != NULL; tempVar = tempVar->next)
	{
		free(tempVar->str);
		free(tempVar);
	}
}
