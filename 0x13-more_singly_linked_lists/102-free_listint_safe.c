#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely (even if it has a loop)
 * @h: Pointer to the address of the head of the list
 * Return: The number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0, i;
	listint_t *current, *next;
	void **visited = NULL;
	size_t visited_size = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		// Check if we've already visited this node
		for (i = 0; i < visited_size; i++)
		{
			if (current == visited[i])
			{
				// Loop detected
				free(visited);
				*h = NULL;
				return (count);
			}
		}

		// Add current node to visited list
		void **new_visited = realloc(visited, (visited_size + 1) * sizeof(void *));
		if (!new_visited)
		{
			free(visited); // avoid memory leak on realloc failure
			exit(98);
		}

		visited = new_visited;
		visited[visited_size++] = current;

		next = current->next;
		free(current);
		current = next;
		count++;
	}

	free(visited);
	*h = NULL;
	return (count);
}
