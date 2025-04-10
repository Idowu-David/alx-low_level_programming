#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n) of a linked list
 * @head: pointer to the first node
 * Return:  the sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;
	dlistint_t *ptr;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr)
	{
		count += ptr->n;
		ptr = ptr->next;
	}
	return (count);
}
