#include "main.h"
#include <stddef.h>



char *_strstr(char *haystack, char *needle)
{
	int i, j, k, x;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
			if (haystack[i] == needle[j])
			{
				for (k = 0 ; haystack[k + i] != '\0'; k++)
				{
					for (x = 0 ; needle[x + j] != '\0'; j++)
					{
						if (haystack[k + i] == needle[x + j])
						{
							return (&haystack[i]);
						}
						
					}
				}
			}
	}
	return (NULL);
}

