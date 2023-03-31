#include "lists.h"

/**
 * add_node_end - adds new node to the end of a linked list
 * @head: a double pointer to the head of a linked list
 * @str: the string value to be allocated
 * Return: a pointer to added node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last;
	size_t j;

	j = 0;
	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	if (!str)
	{
		free(new_node);
		return (NULL);
	}

	while (str[j] != '\0')
		j++;

	new_node->str = strdup(str);
	new_node->len = j;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		last = *head;
		while (last->next)
		{
			last = last->next;
		}
		last->next = new_node;
	}

	return (*head);
}
