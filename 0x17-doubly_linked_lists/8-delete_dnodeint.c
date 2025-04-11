#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the first node
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	cur = *head;
	if (index == 0)
	{
		*head = cur->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(cur);
		return (1);
	}
	for (i = 0; cur != NULL && i < index; i++)
		cur = cur->next;
	if (cur == NULL)
		return (-1);
	cur->prev->next = cur->next;
	if (cur->next != NULL)
		cur->next->prev = cur->prev;
	free(cur);
	return (1);
}
