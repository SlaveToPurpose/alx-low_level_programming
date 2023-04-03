#include "lists.h"

/**
 * print_listint - print all the elements of list
 * @h: pointer to head of list
 * Return: the number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	int total;

	total = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		total++;
	}

	return (total);
}
