#include "lists.h"

/*8
 * print_listint - prints all the elements of a linked list
 <S-F9>8 @h: linked list of type list_int to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
