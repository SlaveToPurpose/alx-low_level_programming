#include "lists.h"

/**
 * sum_dlistint - summs all the data stored in the linked list
 * @head: pointer to head of list
 * Return: sum of data in linked list else if list is empty, 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sumN;

	sumN = 0;
	if (head == NULL)
		return (sumN);

	while (head != NULL)
	{
		sumN += head->n;
		head = head->next;
	}
	return (sumN);
}
