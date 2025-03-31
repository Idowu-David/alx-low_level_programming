#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to the first node
 * @idx: index of the list wehre the new node should be added
 * @n: value of new node
 * Return: address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *ptr;
	unsigned int i;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	ptr = *head;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			if (ptr == NULL)
				return (NULL);
			ptr = ptr->next;
		}
		if (ptr->next == NULL) /* tail addition */
			ptr->next = node;
		else
		{
			node->next = ptr->next;
			ptr->next = node;
		}
	}
	return (node);
}
