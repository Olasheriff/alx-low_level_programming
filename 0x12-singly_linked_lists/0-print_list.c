#include <stdio.h>
#include "list.h"


/**
 * print_list - prints all the elements of a linked list
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return(s);
}
