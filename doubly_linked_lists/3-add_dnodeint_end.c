#include "lists.h"
/**
* add_dnodeint_end - adds a new node at the end of a doubly linked list.
* @head: pointer to head pointer of the list
* @n: value of new node
* Return: address of new node or NULL if it fails
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
dlistint_t *current;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;

	while (current->next != NULL)
		current = current->next;

	current->next = new_node;
	new_node->prev = current;

return (new_node);
}
