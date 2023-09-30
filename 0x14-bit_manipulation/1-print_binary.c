#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	int dig;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	for (dig = (sizeof(n) * 8) - 1; dig >= 0; dig--)
	{
		if (n & (1ul << dig))
			putchar('1');
		else
			putchar('0');
	}
}
