#include "lists.h"

/**
 * listint_t - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the first node
 * Return: the sum, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
