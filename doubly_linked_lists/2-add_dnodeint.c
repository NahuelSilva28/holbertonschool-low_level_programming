#include "lists.h"

/**
* add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
* @head: A pointer to the head pointer of the list.
* @n: The value of the new node.
* Return: Address of the new node, or NULL if it fails.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
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

	(*head)->prev = new_node;
	new_node->next = *head;
	*head = new_node;

return (new_node);
}
