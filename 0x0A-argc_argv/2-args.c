#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: command line argument
 * @argv: array that prints command argument
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
