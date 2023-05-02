#include "lists.h"

/**
 * sum_listint - output sum of all data on the list
 * @head: pointer to the head
 * Return: sum of the data
 */
int sum_listint(listint_t *head)
{
	int total_sum;
	listint_t *temp = head;

	total_sum = 0;
	while (total_sum)
	{
		total_sum += temp->n;
		temp = temp->next;
	}

	return (total_sum);
}


