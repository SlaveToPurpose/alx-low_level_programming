# 0x12. C - Singly linked lists

A Linked List is a linear data structure. Linked list elements are not stored at a contiguous location; the elements are linked using pointers

## Task 0

A  function that prints all the elements of a list_t list

```c
/*prototype*/
size_t print_list(const list_t *h);
```

## Task 1

A  function that returns the number of elements in a linked list_t list

```c
/*prototype*/
size_t list_len(const list_t *h);
```

## Task 2

A function that adds a new node at the beginning of a list_t list

```c
/*prototype*/
list_t *add_node(list_t **head, const char *str);
```


## Task 3

A function that adds a new node at the end of a list_t list

```c
/*prototype*/
list_t *add_node_end(list_t **head, const char *str);
```


## Task 4

A function that frees a list_t list

```c
/*prototype*/
void free_list(list_t *head);
```
