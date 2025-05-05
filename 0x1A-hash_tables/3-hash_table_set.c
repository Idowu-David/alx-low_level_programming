#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: a pointer to the hash table
 * @key: the key
 * @value: value associated with the key
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *head, *ptr;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	if (head == NULL)
		ht->array[index] = node;

	else
	{
		ptr = head;
		while (ptr != NULL)
		{
			if (strcmp(ptr->key, key) == 0)
			{
				free(ptr->value);
				ptr->value = strdup(value);
				if (ptr->value == NULL)
					return (0);
				return (1);
			}
			ptr = ptr->next;
		}
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}
