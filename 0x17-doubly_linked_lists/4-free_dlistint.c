#include "lists.h"

/**
 * free_dlistint - frees a dlisint_t list.
 * @head: pointer to the first node
 * Return: nothing, void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr, *cur;

	if (head == NULL)
		return;
	ptr = cur = head;
	while (ptr)
	{
		cur = cur->next;
		ptr->next = NULL;
		ptr->prev = NULL;
		free(ptr);
		ptr = cur;
	}
	free(head);
}
