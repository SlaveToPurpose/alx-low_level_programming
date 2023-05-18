#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: pointer to head of list
 * @n: data value to be added into node
 * Return: adrress of new element on succes else NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *currentNode = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (!(*head))
	{
		*head = newNode;
		return (newNode);
	}

	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
	}

	currentNode->next = newNode;
	newNode->prev = currentNode;
	return (newNode);
}
