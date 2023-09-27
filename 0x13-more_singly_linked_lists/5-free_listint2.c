#include "lists.h"

/**
  * free_listint2 - Frees a list and sets its head to NULL
  * @head: pointer to first node
  */
void free_listint2(listint_t **head)
{
	listint_t *temp, *node;

	if (head == NULL)
		return;
	node = *head;
	while (node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
