#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of nodes freed in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int loop;
	listint_t *loopnode;

if (!h || !*h)
return (0);

while (*h)
{
	loop = *h - (*h)->next;
if (loop > 0)
	{
	loopnode = (*h)->next;
	free(*h);
	*h = loopnode;
	len++;
	}
else
	{
	free(*h);
	*h = NULL;
	len++;
	break;
	}
}

*h = NULL;

return (len);
}
