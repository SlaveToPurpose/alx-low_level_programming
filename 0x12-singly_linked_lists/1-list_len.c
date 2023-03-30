#include "lists.h"

/**
 * list_len - counts elements in a list
 * @h: address of first element of the list
 * Return: the number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t gloryCount;

	gloryCount = 0;

	while (h != NULL)
	{
		h = h->next;
		gloryCount++;
	}

	return (gloryCount);
}
