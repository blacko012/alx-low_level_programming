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
	listint_t *nod;
	listint_t *buck;

	nod = head;
	buck = head;
	while (head && nod && nod->next)
	{
		head = head->next;
		nod = nod->next->next;

		if (head == nod)
		{
			head = buck;
			buck =  nod;
			while (1)
			{
				nod = buck;
				while (nod->next != head && nod->next != buck)
				{
					nod = nod->next;
				}
				if (nod->next == head)
					break;

				head = head->next;
			}
			return (nod->next);
		}
	}

	return (NULL);
}
