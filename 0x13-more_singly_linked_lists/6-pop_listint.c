#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: double pointer to head of list
 * Return: data that was popped off list on sucess, else 0
 */

int pop_listint(listint_t **head)
{
	/*listint_t *newHead;*/
	listint_t *currentHead;
	int popData;

	currentHead = *head;

	if (currentHead == NULL)
	{
		return (0);
	}

	/*newHead = currentHead->next;*/
	popData = currentHead->n;
	*head = currentHead->next;

	free(currentHead);

	currentHead = *head;

	return (popData);
}
