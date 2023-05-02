#include "lists.h"
/**
 * listint_len - function to output the No. of elements in a list
 * @h: pointer to the address of the first node
 * Return: total number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t node;

	node = 0;

	if (!h)
		return (0);
	do {
		node++;
		h = h->next;
	} while (h != NULL);

	return (node);
}
