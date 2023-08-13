#include	<stdio.h>
/*
 * main	-	function	print	alphabet	in	lowercase
 * using	putchar
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
