#include "lists.h"

/**
 * add_node - add new node at the beginning of list
 * @head: head of current list
 * @str: the new element to be added to the haec of the list
 * Return: address of the new element else NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int t;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	/*find length of string*/
	for (t = 0; str[t] != '\0'; t++)
	{}

	/*allocate data to new element*/
	newNode->str = strdup(str);
	newNode->len = t;
	newNode->next = (*head);

	(*head) = newNode;

	return (*head);
}
