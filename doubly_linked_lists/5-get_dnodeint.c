#include "lists.h"
/**
* get_dnodeint_at_index - Returns the node at a given index in a doubly
* linked list.
* @head: Pointer to the head of the list
* @index: Index of the node to return, starting from 0
* Return: The node at the specified index, or NULL if it doesn't exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}

return (head != NULL ? head : NULL);
}
