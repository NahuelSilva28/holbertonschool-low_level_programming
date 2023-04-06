#include "lists.h"
/**
* add_node - adds a new node to the beginning of a linked list
* @head: double pointer to the list_t
* @str: new string to add to the node
* Return: the address of the new node, or NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
unsigned int len = 0;

	/* Count the length of the string */
	while (str[len])
		len++;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (!new_node)
	return (NULL);

	/* Initialize the new node */
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);

	/* Set the new node as the head of the list */
	(*head) = new_node;

return (*head);
}
