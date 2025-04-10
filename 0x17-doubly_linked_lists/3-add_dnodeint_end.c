#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a linked list
 * @head: pointer to the first node
 * @n: value of the node
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *ptr;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	ptr = *head;
	if (ptr == NULL)
		*head = node;
	else
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = node;
		node->prev = ptr;
	}
	return (node);
}
