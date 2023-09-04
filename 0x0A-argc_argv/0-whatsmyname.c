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
	if (argc > 0)
	printf(" %s\n", argv[0]);

	return (0);
}
