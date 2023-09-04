#include <stdio.h>

/**
  *main - a program thst prints it name
  *@argc: argument count
  *@argv: arrary of char argc
  * a new line fellows
  *Return: 0
  **/

int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc;  i++)
	printf(" %s\n", argv[0]);

	return (0);
}
