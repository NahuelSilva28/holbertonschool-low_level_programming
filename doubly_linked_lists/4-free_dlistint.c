#include "lists.h"
/**
* free_dlistint - frees a doubly linked list.
* @head: pointer to head of the list
* Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *temp = head;

		head = head->next;
		free(temp);
	}
}
