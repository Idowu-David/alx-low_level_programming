#include "lists.h"
/**
 * delete_dnondeint_at_index - deletes the node at index `index` of a linked list
 * @head: pointer to the first node
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr, *cur, *trp;

	if (head == NULL || *head == NULL)
		return (-1);
	ptr = cur = trp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		ptr->next = NULL;
		free(ptr);
	}
	else
	{
		cur = cur->next;
		while (index && cur)
		{
			ptr = ptr->next;
			trp = trp->next;
			cur = cur->next;
			index--;
		}
		if (cur == NULL && index == 1)	/* delete last node */
		{
			trp = ptr->prev;
			trp->next = NULL;
			free(ptr);
		}
		else if (cur != NULL)	/* delete middle node */
		{
			trp = ptr->prev;
			trp->next = cur;
			cur->prev = trp;
			ptr->next = NULL;
			ptr->prev = NULL;
			free(ptr);
		}
		else
			return (-1);
	}
	return (1);
}
