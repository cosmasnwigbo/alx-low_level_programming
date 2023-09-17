#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings followed by a new line.
 * @separator: separator string
 * @n: number of arguments
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *string;


	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(str, const char *);
		if (*string)
		{
			printf("%s", string);
			if (separator != NULL && i < (n - 1))
				printf("%s", separator);

		}
		else
			printf("nil ");
	}
	printf("\n");
	va_end(str);
}
