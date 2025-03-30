#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: first node of the list
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (head == NULL)
		return (0);
	ptr = *head;
	n = ptr->n;
	*head = ptr->next;
	ptr->next = NULL;
	free(ptr);
	return (n);
}
