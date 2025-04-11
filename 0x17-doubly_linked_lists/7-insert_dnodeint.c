#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the first node
 * @idx: index of the node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *curr, *node;

	if (h == NULL || *h == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	ptr = curr = *h;
	if (idx == 0) /* add at beginning */
	{
		node->next = *h;
		(*h)->prev = node;
		*h = node;
	}
	else
	{
		--idx;
		curr = curr->next;
		while (idx && curr)
		{
			curr = curr->next;
			ptr = ptr->next;
			idx--;
		}
		if (curr == NULL && idx == 0) /* add at end */
		{
			ptr->next = node;
			node->prev = ptr;
		}
		else
		{
			curr->prev = node;
			ptr->next = node;
			node->prev = ptr;
			node->next = curr;
		}
	}
	return (node);
}
