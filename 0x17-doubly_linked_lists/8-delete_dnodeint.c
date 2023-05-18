#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node from a dlistint_t at a given index.
 * @head: pointer to the head of the dlistint_t.
 * @index: The index of node to delete
 * Return: Upon success return 1, else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *currentNode;

	currentNode = *head;

	if (*head == NULL)
		return (-1);

	while (index != 0)
	{
		if (currentNode == NULL)
			return (-1);

		currentNode = currentNode->next;
		index--;
	}

	if (currentNode == *head)
	{
		*head = currentNode->next;

		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		currentNode->prev->next = currentNode->next;

		if (currentNode->next != NULL)
			currentNode->next->prev = currentNode->prev;
	}

	free(currentNode);
	return (1);
}
