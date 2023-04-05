#include "lists.h"

/**
 * free_listint2 - free a list and sets head to null
 * @head: double pointer to head of list
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *tempNode;

	current = *head;

	if (head == NULL)
	{
		return;
	}

	while (current != NULL)
	{
		tempNode = current->next;
		free(current);
		current = tempNode;
	}

	*head = NULL;
}
