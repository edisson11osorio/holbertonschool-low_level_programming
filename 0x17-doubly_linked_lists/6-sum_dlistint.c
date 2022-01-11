#include "lists.h"
/**
* sum_dlistint- sum all n in the list
* @head: head of the list
* Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
	int result = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		result += current->n;
		current = current->next;
	}
	return (result);
}
