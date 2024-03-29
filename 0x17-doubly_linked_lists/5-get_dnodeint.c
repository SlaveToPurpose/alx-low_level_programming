#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a doubly linked list
 * @head: pointer to head of list
 * @index: nth node to be returned
 * Return: the nth node of linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
	{
		head = head->prev;
	}

	i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		else
		{
			head = head->next;
			i++;
		}
	}
	return (NULL);
}
