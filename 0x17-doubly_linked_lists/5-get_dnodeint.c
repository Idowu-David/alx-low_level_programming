#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the first node of the list
 * @index: index of the node, starting from 0
 * Return: the address of the node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = head;
	while (index && ptr)
	{
		ptr = ptr->next;
		index--;
	}
	return (ptr);
}
