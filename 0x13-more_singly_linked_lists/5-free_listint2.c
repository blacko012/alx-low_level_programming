#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets the head to NULL
 * @head: pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
listint_t *cursor;
listint_t **temp = head;

if (temp != NULL && *temp != NULL)
{
while (*head != NULL)
{
cursor = *head;
*head = (*head)->next;
free(cursor);
}

*temp = NULL;
}
}
