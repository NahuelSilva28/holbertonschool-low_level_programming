#include "lists.h"

/**
* free_list - Frees a linked list.
* @head: Pointer to the first node of the list.
*/
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		list_t *next = head->next;
		free(head);
		head = next;
	}
}
