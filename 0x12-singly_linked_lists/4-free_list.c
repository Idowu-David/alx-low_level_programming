#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the first node
 * Return: nothing, void
 */
void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;
	while (ptr)
	{
		head = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = ptr->next;
	}
	free(head);
}
