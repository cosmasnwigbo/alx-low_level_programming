#include "lists.h"
#include  <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
  *add_node_end - function that adds a new node at the end of a list_t list
  *@head: parameter of function add_node_end
  *@str:parameter of function
  *Return: address of new_node otherwise Null
  **/

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;

	list_t *new_node;

	list_t *tmp;

	tmp = *head;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;
	return (new_node);
}
