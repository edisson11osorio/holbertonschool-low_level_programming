#include "lists.h"
/**
* get_dnodeint_at_index- frees a dlistint_t lis
* @head: head of the list
* @index: index
* Return: number of elements
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		++i;
	}

	return (NULL);
}
