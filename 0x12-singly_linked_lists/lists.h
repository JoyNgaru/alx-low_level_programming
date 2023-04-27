#ifndef LIST_H
#define LIST_H

#include <stddef.h>

/**
* struct list_struct - snode struct of singly linked list
* @string: string to work with
* @size: length of the string
* @next_node: pointer to the address of the next node
*/
typedef struct list_struct
{
char *string;
unsigned int size;
struct list_s *next_node;
} list_t;

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

list_t *add_node_end(list_t **head, const char *str);

void free_list(list_t *head);

int _putchar(char c);

#endif
