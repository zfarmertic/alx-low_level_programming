#include <stdio.h>

/**
 * main - A program that prints arguments
 * @argc: command line number
 * @argv: command that print array 
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
