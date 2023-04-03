#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/*function prints list elements*/
size_t print_list(const list_t *h);

/*function returns the number of elements in linked list*/
size_t list_len(const list_t *h);

/*function adds new node at begining of list*/
list_t *add_node(list_t **head, const char *str);

/*function adds new node at end of list*/
list_t *add_node_end(list_t **head, const char *str);

/*function that frees a list*/
void free_list(list_t *head);

/*putchar prototypes*/
int _putchar(char c);

/*function to execute before main*/
void before_main(void) __attribute__((constructor));

#endif /*LISTS_H*/
