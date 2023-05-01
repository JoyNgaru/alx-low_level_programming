#include "main.h"
/**
 * print_listint - Output all elements in the list
 * @h: pointer to the first node's address
 * Return: elements on the node
 */
size_t print_listint(const listint_t *h)
{
	size_t size;

	size = 0;
	while (h)
	{
		printf("%d\n", h->elem);
		h = h->next;
		size++;
	}
	return (size);
