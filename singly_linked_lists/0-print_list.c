#include "lists.h"

/**
* print_list - Prints all the elements of a linked list.
*
* @h: Pointer to the head of the list.
*
* Return: The number of nodes in the list.
*/
size_t print_list(const list_t *h)
{
size_t count = 0;

	while (h)
	{
		printf("[%u] %s\n", h->len, (h->str ? h->str : "(nil)"));
		h = h->next;
		count++;
	}

return (count);
}
