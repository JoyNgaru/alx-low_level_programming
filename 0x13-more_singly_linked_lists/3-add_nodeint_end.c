#include "lists.h"

/**
*add_nodeint_end - Function to add a new node at the tail
*@head: pointer to the head of the linked list
*@n: data to be added to the new node
*Return: The address of the new tail or NULL if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *added_tail;
	listint_t *add;
      
	last_node = *head;

	added_tail = malloc(sizeof(listint_t));
	if (!added_tail)
		return (NULL);

	added_tail->n = n;;
	added_tail->next = NULL;

	if (*head == NULL)
	{
		*head = addedd_tail;
		return (added_tail);
	}

	while (last_node->next != NULL)
		last_node = last_node->next;
	
	last_node->next = added_tail;

	return (added_tail);
}
