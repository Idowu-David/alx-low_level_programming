#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index `index` of a listint_t
 * @head: pointer to the first node
 * @index: index of the node
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *cur;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	ptr = *head;
	if (index == 0) /* delete head node */
	{
		*head = ptr->next;
		ptr->next = NULL;
		free(ptr);
		return (1);
	}
	cur = *head;
	for (i = 0; i < index; i++)
	{
		ptr = cur;
		if (cur)
			cur = cur->next;
		else
			break;
	}
	if (cur == NULL)
		return (-1);
	ptr->next = cur->next;
	free(cur);
	return (1);
}
