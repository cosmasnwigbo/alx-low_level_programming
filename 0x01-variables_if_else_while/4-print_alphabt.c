 #include        <stdio.h>
/**
 * main	-	function	print	alphabets	in	lowercase
 * using	putchar
 * Return:	0
 **/
int	main(void)
{
	char	x	=	'a';

	while	(x	<=	'z')
	{
		if	(x	!=	'e'	&&	x	!=	'q')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
	return	(0);
}
