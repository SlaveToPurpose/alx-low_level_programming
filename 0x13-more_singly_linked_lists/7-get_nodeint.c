#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of list
 * @head: pointer to head of node
 * @index: index of node to return
 * Return: NULL if node does not exist else return pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *currNode;
	unsigned int counter;

	counter = 0;
	currNode = head;

	while (currNode != NULL)
	{
		if (counter == index)
		{
			return (currNode);
		}
		counter++;
		currNode = currNode->next;
	}

	return (0);
}
