#include "lists.h"

/**
 * find_listint_loop - Finds the start of a loop in a linked list.
 * @head: A pointer to the head of the linked list.
 * Return: The address of the node where the loop starts, or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *red = head;
listint_t *black = head;

if (!head)
	return (NULL);

while (red && black && black->next)
{
black = black->next->next;
red = red->next;
if (black == red)
{
red = head;
while (red != black)
{
red = red->next;
black = black->next;
}
	return (black);
}
}

	return (NULL);
}
