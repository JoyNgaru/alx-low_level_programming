#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

#ifndef _PRINT_LIST
#define _PRINT_LIST
#define _FMS(x) ((x) ? (x) : ("(nil)")) /* Format string */
#endif /* _PRINT_LIST */

/**
 * print_list - function to output the elemens of a list
 * @h: pointer to list_t
 * Return: amount of nodes in the singly list
 */
size_t print_list(const list_t *h)
{
	size_t elements;
	unsigned int size;

	for (elements = 0; h; elements++)
	{
		size = (h->string == NULL) ? (0) : (h->size);
		printf("[%d] %s\n", size, _FMS(h->string));
		h = h->next;
	}

	return (elements);
}
