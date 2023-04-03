#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of list
 * @head: pointer to head of list
 * @n: data value to be entered into new node
 * Return: address of new element added
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = (*head);

	*head = newNode;

	return (newNode);
}
