#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */

void free_list(list_t *head)
{
	list_t *new;

	list_t *current;

	current = head;

	while  (current != NULL)
	{
		new = current->next;

		free(current->str);
		free(current);
		current = new;
	}
}
