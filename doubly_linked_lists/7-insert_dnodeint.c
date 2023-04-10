#include "lists.h"
/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @head: pointer to head of the list
* @idx: index to add at, starting from 0
* @n: value of new node
* Return: address of the new node or NULL if it fails
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
unsigned int count = 0;
dlistint_t *tmp, *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		if (*head)
			(*head)->prev = new_node;
		*head = new_node;
		return (new_node);
	}

	tmp = *head;
	while (tmp != NULL && count < idx - 1)
	{
		tmp = tmp->next;
		count++;
	}
	if (tmp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = tmp->next;
	new_node->prev = tmp;
	if (tmp->next != NULL)
		tmp->next->prev = new_node;
	tmp->next = new_node;

return (new_node);
}
