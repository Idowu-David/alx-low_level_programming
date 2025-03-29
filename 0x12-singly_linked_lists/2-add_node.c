#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to the head node
 * @str: string
 * Return: the address of the new element or NULL if failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int len = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	node->len = len;
	node->str = strdup(str);
	node->next = NULL;
	if (head != NULL)
		node->next = *head;
	*head = node;
	return (node);
}
