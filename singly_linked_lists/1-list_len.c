#include "lists.h"
/**
* list_len - Returns the number of nodes in a linked list.
*
* @h: Pointer to the head of the list.
*
* Return: The number of nodes in the list.
*/
size_t list_len(const list_t *h)
{
size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}

return (c);
}
