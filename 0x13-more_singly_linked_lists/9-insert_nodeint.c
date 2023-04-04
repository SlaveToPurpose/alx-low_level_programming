#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at a given index
 * @head: pointer to head of list
 * @idx: index at which to enter new node
 * @n: the data to be entered into list
 * Return: address of new node else null
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *currNode;
	listint_t *newNode;
	unsigned int indexVal;
	unsigned int itterator;

	indexVal = idx - 1;
	itterator = 0;

	currNode = *head;
	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->next = NULL;
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = currNode;
		currNode = newNode;
		return (newNode);
	}
	else
	{
		while (currNode != NULL && itterator < idx)
		{
			if (indexVal == itterator)
			{
				newNode->next = currNode->next;
				currNode->next = newNode;
				return (newNode);
			}
			else
				currNode = currNode->next;

			itterator++;
		}
	}
	return (NULL);
}
