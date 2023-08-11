#include	<stdio.h>
/**
  * main	-	function	print	all	numbers	of	base
  * 16	in	lowrcase
  * Return:	0
  **/

int	main(void)
{
	int	x	=	0;
	char	y	=	'a';

	while	(x	<=	9)
	{
		putchar(x	+	'0');
		x++;
		if	(x	>	9)
		{
			while	(y	<=	'f')
			{
				putchar(y);
				y++;
			}
		}
	}
	putchar('\n');
	return	(0);
}

