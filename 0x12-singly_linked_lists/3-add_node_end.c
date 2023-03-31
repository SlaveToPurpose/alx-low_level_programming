#include "lists.h"

/**
 * add_node_end - adds node to end of list
 * @head: double pointer to head of list
 * @str: data to be entered into new node
 * Return: pointer to new node added on success, else return null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int j;
	list_t *new_node;
	list_t *tempVar;

	j = 0;
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	tempVar = *head;

	while (str[j] != '\0')
		j++;
	new_node->str = strdup(str);
	new_node->next = NULL;
	new_node->len = j;

	if (head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (tempVar->next != NULL)
		{
			tempVar = tempVar->next;
		}
		tempVar->next = new_node;
	}
	return (*tempVar);
}
