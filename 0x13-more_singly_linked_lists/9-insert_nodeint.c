#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - add a new node at some point.
 * @head: pointer to the head
 * @idx: index of the node to insert.
 * @n: contnt to be put in the new node.
 * Return: pointer to the new node, or NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *added_node;
       listint_t *present_node;
	unsigned int content;

	if (head == NULL)
		return (NULL);

	added_node = malloc(sizeof(listint_t));
	if (added_node == NULL)
		return (NULL);
	added_node->n = n;

	if (idx == 0)
	{
		added_node->next = *head;
		*head = added_node;
		return (added_node);
	}

	present_node = *head;
	for (content = 0; content < idx - 1 && present_node != NULL; content++)
	{
		present_node = present_node->next;
	}

	if (present_node == NULL)
	{
		free(added_node);
		return (NULL);
	}

	added_node->next = present_node->next;
	present_node->next = added_node;

	return (added_node);
}
