#include "lists.h"

/**
 * print_dlistint - print all the elements of a doubly linked list
 * @h: pointer to head of list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_of_nodes = 0;

	if (h)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			num_of_nodes++;
		}
		return (num_of_nodes);
	}
	else
		return (0);
}
