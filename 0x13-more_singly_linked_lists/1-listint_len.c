#include "lists.h"

/**
 * listint_len - find the number of elements in a linked list
 * @h: pointer to head of linked list
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	int total;

	total = 0;

	while (h != NULL)
	{
		total++;
		h = h->next;
	}

	return (total);
}
