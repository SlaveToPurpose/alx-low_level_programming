#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginng of list
 * @head: pointer to pointer to head of list
 * @n: data to be added in new node
 * Return: address of new element unless failed, then return NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->next = *head;
	newNode->n = n;
	newNode->prev = NULL;

	if (*head)
		(*head)->prev = newNode;

	*head = newNode;

	return (newNode);
}
