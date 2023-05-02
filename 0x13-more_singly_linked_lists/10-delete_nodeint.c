#include "lists.h"

/**
 * delete_nodeint_at_index - function to  delete a node at a certain index
 * @head: pointer to the head pointer
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_delete = *head;
	listint_t *present_node = NULL;
	unsigned int index_point = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(node_delete);
		return (1);
	}

	while (index_point < index - 1)
	{
		if (!node_delete || !(node_delete->next))
			return (-1);
		node_delete = node_delete->next;
		index_point++;
	}


	present_node = node_delete->next;
	node_delete->next = present_node->next;
	free(present_node);

	return (1);
}



