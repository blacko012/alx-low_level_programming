#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: address to the first node in the list
 *
 * Return: address of head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL;
	listint_t *next = NULL;

while (*head)

{
	next = (*head)->next;
	(*head)->next = node;
	node = *head;
	*head = next;
}

	*head = node;

return (*head);
}
