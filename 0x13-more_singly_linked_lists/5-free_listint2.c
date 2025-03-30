#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the first node
 * Return: nothing, void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	ptr = *head;
	while (ptr)
	{
		*head = ptr->next;
		free(ptr);
		ptr = *head;
	}
	*head = NULL;
}
