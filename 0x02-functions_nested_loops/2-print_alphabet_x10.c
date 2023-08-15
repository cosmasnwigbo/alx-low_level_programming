#include	"main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase
 * fellowed by a new line
 **/

void	print_alphabet_x10(void)
{
	char	a;
	int	j	=	0;
		while	(j	<	10)
		{
			for	(a	=	'a';	a	<=	'z';	a++)
			{
				_putchar(a);
			}
			_putchar('\n');
			j++;
		}
}


