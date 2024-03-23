#include <stdio.h>
#include "lists.h"


size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	if (h == NULL)
	{
		return (1);
	}
	while(h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
