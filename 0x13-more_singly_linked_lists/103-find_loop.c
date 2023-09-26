#include "lists.h"

/**
 * find_listint_loop - fines the loop in a linked list
 ( @head: linked list to search for
 *
 * Return: address of the node where the loopp starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->nezt;
			}
			return (fast);
		}
	}

	return (NULL);
}
