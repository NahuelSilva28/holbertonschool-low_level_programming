#include "lists.h"
/**
* sum_dlistint - Computes the sum of all the data (n) of a dlistint_t linked list.
* @head: A pointer to the head of the list.
* Return: The sum of all nodes or 0 if the list is empty.
*/
int sum_dlistint(dlistint_t *head)
{
long int sum;
dlistint_t *tmp;

	sum = 0;
	if (head == NULL)
		return (sum);

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
return (sum);
}
