#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: address to the first node in the list
 *
 * Return: address of head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before, *after;

	if (head == NULL || *head == NULL)
		return (NULL);

	after = NULL;

	while ((*head)->next != NULL)
	{
		before = (*head)->next;
		(*head)->next = after;
		after = *head;
		*head = before;
	}

	(*head)->next = after;

	return (*head);
}
