#include "lists.h"
/**
* free_listint - Function to free a linked list
* @head: pointer to the head pointer
*/
void free_listint(listint_t *head)
{
	listint_t *last_node;


		do {
		last_node = head->next;
free(last_node);

	} while (head);
}
