#include "main.h"
/**
 *_strcat - a function that concatenates two strings
  *@dest: parameter of function _strcat
  *@src: parameter of function _strcat
  *Return: a pointer to dest
  **/

char *_strcat(char *dest, char *src)
{
	char *dest1 = dest;

	while (*dest1 != '\0')
	{
		dest1++;
	}
	while (*src != '\0')
	{
		*dest1 = *src;
		dest1++;
		src++;
	}
	*dest1 = '\0';
	return (dest);
}


