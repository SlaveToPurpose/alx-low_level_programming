#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at given podition
 * @h: pointer to pointer of head of list
 * @idx: position at which to insert node
 * @n: data item to be inserted in node
 * Return: address of new node or null on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *currentNode;
	dlistint_t *newNode;

	currentNode = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else if (currentNode->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		while (idx != 1)
		{
			currentNode = currentNode->next;
			idx--;
		}
	}


	if (currentNode->next == NULL)
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = currentNode;
	newNode->next = currentNode->next;

	currentNode->next->prev = newNode;
	currentNode->next = newNode;

	return (newNode);
}
