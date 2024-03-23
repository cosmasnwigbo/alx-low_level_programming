#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len -  function that returns the number of elements in a linked
 * @h: parameter of func
 * Return: count
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (1);
	}
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
