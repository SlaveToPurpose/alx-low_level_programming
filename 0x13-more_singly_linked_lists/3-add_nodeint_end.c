#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to the head of a list
 * @n: data point to be entered into new node
 * Return: address of new element else Null if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *tempNode = *head; /*used to itterate through list*/

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (tempNode->next != NULL)
		tempNode = tempNode->next;

	tempNode->next = newNode;

	return (newNode);
}
