#include "lists.h"

/**
* print_list - output elemts of list_t
* @h: Head
* Return: nodes present
**/
size_t print_list(const list_t *h)
{
	int content;

	if (h == NULL)
	{
		return (0);
	}

	for (content = 0; h; content++)
	{
		printf("[%u] %s\n", (h->str != NULL) ? h->len : 0,
				(h->str != NULL) ? h->str : "(nil)");
		h = h->next;
	}

	return (content);
}
