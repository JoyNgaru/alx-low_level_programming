#include "lists.h"
/**
 * print_listint - Output all elements in the list
 * @h: pointer to the first node's address
 * Return: elements on the node
 */
size_t print_listint(const listint_t *h)
{
	size_t node;

	node = 0;
	do {
		printf("%d\n", h->n);
		node++;
		h = h->next;
	} while (h != NULL);

	return (node);
}
