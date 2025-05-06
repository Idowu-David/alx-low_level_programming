#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: nothing, void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *curr;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			curr = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
			ptr = curr;
		}
	}
	free(ht->array);
	free(ht);
}
