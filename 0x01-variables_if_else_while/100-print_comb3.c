#include	<stdio.h>
/**
  *	main	-	function	print	all	possible	combination
  *	of	two	digits
  *	Return:	0
  **/

int	main(void)
{
	int	x	=	0;
	int	y	=	1;

	while	(x	<=	8)
	{
		while	(y	<=	9)
		{
			putchar(x	+	'0');
			putchar(y	+	'0');
			if	(y	>	x)
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return	(0);
}
