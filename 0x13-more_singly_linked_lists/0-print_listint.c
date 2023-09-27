#include "lists.h"

/**
 * print_listint - prints all the elements
 * of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
*/
size_t listint_len(const listint_t *h)
{
size_t n = 0;

while (h)
{
n++;
h = h->next;
}

return (n);
}
