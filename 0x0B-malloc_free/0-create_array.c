#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * *create_array - a function that creates an array of character
  *@size: parameter of function
  *@c: parameter of function
  *Return: 0
  **/

char *create_array(unsigned int size, char c)
{
	char *j;

	[int [un]signed] i = 0;

	if (size == 0)
	{
		return (0);
	}

	else
	{
		j = malloc(sizeof(char) * size);
	}

	if (j == NULL)
	{
		return (0);
	}
	else
		for (i = 0; i < size; i++)
			*(j + i) = c;
	return (j);
}
