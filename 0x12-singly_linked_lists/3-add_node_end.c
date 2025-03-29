#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the list
 * @str: string
 * Return: the address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *ptr;
	int len = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;
	node->len = len;
	node->str = strdup(str);
	if (*head == NULL)
		*head = node;
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = node;
	node->next = NULL;
	return (node);
}
