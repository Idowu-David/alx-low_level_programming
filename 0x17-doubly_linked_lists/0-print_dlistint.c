#include "lists.h"

/**
 * print_dlistint - prints all the elements of dlistint_t list
 * @h: pointer to the head node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
