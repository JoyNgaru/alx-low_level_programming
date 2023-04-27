#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * list_len - Funct to output No.  of nodes in a linked list
 * @h: singly-linked list to work with
 * Return: No. of elements in h
 */
size_t list_len(const list_t *h)
{
	int elements;

	for (elements = 0; h; elements++)
		h = h->next;
	return (elements);
}
