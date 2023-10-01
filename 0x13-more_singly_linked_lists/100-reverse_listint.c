#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: address to the first node in the list
 *
 * Return: address of head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before;
	listint_t *after;

	before = NULL;
	after = NULL;

	while (*head != NULL)
	{
		before = (*head)->next;
		(*head)->next = after;
		after = *head;
		*head = before;
	}

	*head = after;
	return (*head);
}
