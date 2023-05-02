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
	do  {
		total_sum += temp->n;
		temp = temp->next;
	} while (temp);

	return (total_sum);
}


