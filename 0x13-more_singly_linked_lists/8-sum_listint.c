#include "lists.h"

/**
 * sum_listint -sums data in linked list
 * @head: pointer to linked list
 * Return: 0 if list is empty else return sum of all data
 */

int sum_listint(listint_t *head)
{
	listint_t *newNode;
	unsigned int sumVar;

	sumVar = 0;
	newNode = head;

	while (newNode != NULL)
	{
		sumVar += (newNode->n);
		newNode = newNode->next;
	}

	return (sumVar);
}
