#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


list_t *add_node(list_t **head, const char *str)
{
	list_t  *new_node;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}
	if (str == NULL)
		return (0);

	new_node =malloc (sizeof(list_t));
	{
		if (new_node == NULL)
		{
			return (0);
		}
		new_node->str = strdup(str);
		new_node->len = len;
		new_node->next = *head;
	}
	return (new_node);

	
}

