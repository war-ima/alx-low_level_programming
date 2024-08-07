#include "lists.h"

/**
 * sum_listint - sums up all the numbers in a linked list
 * @head: head of the list
 *
 * Return: total sum of data within linked list
 */
int sum_listint(listint_t *head)
{
	listint_t *cursor = head;
	size_t sum = 0;

	while (cursor != NULL)
	{
		sum += cursor->n;
		cursor = cursor->next;
	}
	return (sum);
}
