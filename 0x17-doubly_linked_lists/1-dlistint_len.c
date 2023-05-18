#include "lists.h"

/**
 * dlistint_len - counts number of elements
 * @h: pointer to head of list
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_nodes = 0;

	if (h)
	{
		while (h)
		{
			num_of_nodes++;
			h = h->next;
		}
		return (num_of_nodes);
	}
	else
		return (0);
}
