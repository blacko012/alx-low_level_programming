#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in,
 * a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *nodeint, *buck;

	if (head == NULL || head->next == NULL)
		return (NULL);

	nodeint = head->next;
	buck = (head->next)->next;

	while (buck)
	{
		if (nodeint == buck)
		{
			nodeint = head;

			while (nodeint != buck)
			{
				nodeint = nodeint->next;
				buck = buck->next;
			}

			return (nodeint);
		}

		nodeint = nodeint->next;
		buck = (buck->next)->next;
	}

	return (NULL);
}
