#include "lists.h"
/**
* dlistint_len - Returns the number of nodes in a dlistint_t list.
* @h: A pointer to the head of the list.
* Return: The number of nodes in the list.
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t size = 0;

	if (h == NULL)
		return (size);

	while (h)
	{
		size++;
		h = h->next;
	}

return (size);
}
