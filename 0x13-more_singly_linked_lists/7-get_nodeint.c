#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node on the list
 * @head: pointer to the head
 * @index: index of the node to be returned
 *
 * Return: pointer to the nth nod
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}

	return (temp ? temp : NULL);
}



