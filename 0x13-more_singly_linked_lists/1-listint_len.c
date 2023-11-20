#include "lists.h"

/**
 * listint_len - returns the number of elements
 * in a linked lists
 * @h: A pointer to the head of the list
 *
 *
 * Return: the number of elements in the listint_t list
 */
size_t listint_len(const listint_t *h)
{
size_t number = 0;

while (h)
{
number++;
h = h->next;
}

return (number);
}
