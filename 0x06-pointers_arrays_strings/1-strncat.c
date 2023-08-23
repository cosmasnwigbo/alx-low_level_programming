#include "main.h"

/**
  *_strncat - a function that concatenates two strings.
  *@dest: parameter of function _strcat
  *@src: parameter of function _strcat
  *@n; number of src character to append to dest
  *Return: dest
  **/
char *_strncat(char *dest, char *src, int n)
{
	char *dest1 = dest;
	int i;

	while (*dest1 != '\0')
	{
		dest1++;
	}
	for (i = 0; i < n && *src != '\0'; i++)
	{
		*dest1 = *src;
		dest1++;
		src++;
		n--;
	}
	*dest1 = '\n';
	return	(dest);
}
