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

	nodeint = head;
	buck = head;
	while (head && nodeint && nodeint->next)
	{
		head = head->next;
		nodeint = nodeint->next->next;

		if (head == nodeint)
		{
			head = buck;
			buck =  nodeint;
			while (1)
			{
				nodeint = buck;
				while (nodeint->next != head && nodeint->next != prev)
				{
					nodeint = nodeint->next;
				}
				if (nodeint->next == head)
					break;

				head = head->next;
			}
			return (nodeint->next);
		}
	}

	return (NULL);
}
