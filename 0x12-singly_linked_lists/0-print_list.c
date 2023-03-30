#include "lists.h"

/**
 * print_list - prints elements of a list
 * @h: address of first element of the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int gloryCount;

	gloryCount = 0;

	while (h != NULL)
	{
		if ((h->str) == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len ,h->str);

		h = h->next;
		gloryCount++;
	}

	return (gloryCount);
}

