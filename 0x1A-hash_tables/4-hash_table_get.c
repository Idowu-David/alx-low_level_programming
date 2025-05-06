#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key to find
 * Return: the value with the element, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;
	char *value;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	if (ptr == NULL)
		return (NULL);
	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			value = ptr->value;
			break;
		}
		ptr = ptr->next;
	}
	return (value);
}
