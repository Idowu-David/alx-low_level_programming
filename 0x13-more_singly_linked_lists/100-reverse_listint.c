#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked
 * @head: pointer to the first node
 * Return: the pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *curr;

	prev = curr = NULL;
	while (*head)
	{
		curr = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = curr;
	}
	*head = prev;
	return (*head);
}
