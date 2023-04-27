#include "lists.h"
/**
 * free_list - Frees a linked list
 * @head: The beginning of the list
 */
void free_list(list_t *head)
{
	list_t *temporary_address;

	temporary_address = head;
	while (head)
	{
		temporary_address = head;
		head = head->next;
		free(temporary_address->str);
		free(temporary_address);
	}
	free(head);
}
