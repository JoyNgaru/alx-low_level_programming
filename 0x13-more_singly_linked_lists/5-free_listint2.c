#include "lists.h"

/**
  * free_listint2 - function to free the list and set head to null
  * @head: a pointer to the head pointer
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
