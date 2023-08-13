#include	<stdio.h>
/**
  * main	-	dunction	print	lowercase	and	uppercsae
  * using	putchar
  * Return:	0
  **/
int	main(void)
{
	char	x	=	'a';
	char	y	=	'A';

	while	(x	<=	'z')
	{
		putchar(x);
		x++;
		if	(x	>	'z')
		{
			while	(y	<=	'Z')
			{
				putchar(y);
				y++;
			}
		}
	}
	putchar('\n');
	return	(0);
}
