#include "lists.h"

/**
 * list_len - determines length of linked list
 * @h: pointer to the list_t list
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
