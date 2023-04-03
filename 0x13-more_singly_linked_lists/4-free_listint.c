#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to head of list
 */

void free_listint(listint_t *head)
{

	listint_t *current = head;
	listint_t *tempNode;

	while (current != NULL)
	{
		tempNode = current->next;
		free(current);
		current = tempNode;
	}

	head = NULL;
}
