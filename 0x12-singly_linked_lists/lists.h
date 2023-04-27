#ifndef LIST_H
#define LIST_H

#include <stddef.h>

/**
* struct list_s - singly linked list
* @string: string to work with
* @size: length of the string
* @next: points to the next node
* Description: node struct of singly link list
*/
typedef struct list_s
{
char *string;
unsigned int size;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

list_t *add_node_end(list_t **head, const char *str);

void free_list(list_t *head);

int _putchar(char c);

#endif
