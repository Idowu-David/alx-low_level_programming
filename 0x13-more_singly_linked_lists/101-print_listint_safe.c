#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow, *fast;
	int flag = 0;

	fast = slow = head;
	if (head == NULL)
		return (0);
	while (fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
			break;
		if (!fast || !fast->next)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		slow = head;
		while (fast != slow)
		{
			printf("[%p] %d\n", (void *)fast, fast->n);
			count++;
			fast = fast->next;
			slow = slow->next;
		}
		printf("-> [%p] %d\n", (void *)slow, slow->n);
		count++;
	}
	else if (flag == 1)
	{
		while (slow)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;
			slow = slow->next;
		}
	}
	return (count);
}
