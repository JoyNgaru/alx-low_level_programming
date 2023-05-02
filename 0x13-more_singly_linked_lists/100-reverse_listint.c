#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the head pointer
 * 
 * Return: head pointer to the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev_node = NULL;
	listint_t *new_node = NULL;

	while (*head)
	{
		rev_node = (*head)->next;
		(*head)->next = new_node;
		new_node = *head;
		*head = rev_node;
	}

	*head = new_node;

	return (*head);
}

