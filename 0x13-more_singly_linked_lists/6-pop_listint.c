#include "lists.h"
/**
* pop_listint - function to deletes the head node
* @head: pointer to the head pointer
* Return: the head node’s data
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node_data;

	if (head == NULL)
	       return (0);

	node_data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (node_data);
}
