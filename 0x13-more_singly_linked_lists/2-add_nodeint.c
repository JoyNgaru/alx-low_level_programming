#include "lists.h"
/**
 * add_nodeint - function to add a node at the head
 * @head: pointer to the pointer to the head of the list
 * @n: data to be inserted on the new node
 * Return:if success,  address of the new node, else NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *added_node;

	added_node = malloc(sizeof(listint_t));
	if (!added_node)
		return (NULL);

added_node->n  = n;
	added_node->next = *head;

	*head = added_node;
	return (added_node);
}
