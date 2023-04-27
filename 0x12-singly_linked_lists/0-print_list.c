#include <stdio.h> 
#include "lists.h"

#ifndef _PRINT_LIST
#define _PRINT_LIST
#define _FMS(x) ((x) ? (x) : ("(nil)"))/*x>0, if yes, nil, else returns x*/
#endif

/**
 * print_list - function to output the elemens of a list
 * @h: pointer to list_t
 * Return: amount of nodes in the singly list
 */
size_t print_list(const list_t *h)
{
	size_t i;
	unsigned int len;

	for (i = 0; h; i++)
	{
		len = (h->str == NULL) ? (0) : (h->len);
		printf("[%d] %s\n", len, _FMS(h->str));
		h = h->next;
	}

	return (i);
}
