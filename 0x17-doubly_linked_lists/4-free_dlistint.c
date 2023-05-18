#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to head of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode;

	if (head == NULL)
		return;

	/*navigate to front of list*/
	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		currentNode = head->next;
		free(head);
		head = currentNode;
	}
}
