#include "lists.h"

/**
* free_list - Frees a linked list.
* @head: Pointer to the first node of the list.
*/
void free_list(list_t *head)
{
list_t *next;
    
	while (head != NULL)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
