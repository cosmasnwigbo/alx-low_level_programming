#include <stdio.h>

/**
  *main - a program that prints the number of arguments passed into it.
  *@argc: argument count
  *@argv: argument vector
  *Return: 0
  **/

int main(int argc, char *argv[])
{
	printf("%d %s\n", argc - 1, argv[0]);
	return (0);

}
