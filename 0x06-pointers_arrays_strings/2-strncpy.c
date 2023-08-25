#include "main.h"

/**
 *_strncpy - a function that copies a string
 *@dest: parameter of strncpy
 *@src: parameter of strncpy
 *@n: number of element in a array
 *Return: dest
 **/

char *_strncpy(char *dest, char *src, int n)
{
	char *dest1 = dest;
	int i;

	for (i = 0; i < n ; i++)
	{
		if (*src != '\0')
		{
			*dest1 = *src;
			src++;
			dest1++;
		}
		else
		{
			*dest1 = '\0';
			des1t++;
		}
	}
	return (dest);
}
