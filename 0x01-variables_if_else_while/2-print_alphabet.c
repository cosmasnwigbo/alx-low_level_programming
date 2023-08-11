#include	<stdio.h>
/*
 * main	-	print	alphabet	in	lowercase
 * Return:	Always	0	(success)
 *
 */

int	main(void)
{
	char	k	=	'a';

	while	(k	<=	'z')
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return	(0);
}
