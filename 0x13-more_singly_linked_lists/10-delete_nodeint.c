#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of linked list
 * @head: double pointer to head of linked list
 * @index: index of node to be deleted
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currNode;
	listint_t *tempNode;
	unsigned int itterator;

	if (*head == NULL)
		return (-1);
	currNode = *head;
	tempNode = NULL;
	if (index == 0)
	{
		*head = (*head)->next;
		free(currNode);
		return (1);
	}
	else
	{
		for (itterator = 0; itterator < (index - 1); itterator++)
		{
			if (currNode == NULL || (currNode->next == NULL))
				return (-1);

			currNode = currNode->next;
		}
		tempNode = currNode->next;
		currNode->next = tempNode->next;
		free(tempNode);
		return (1);
	}
}
