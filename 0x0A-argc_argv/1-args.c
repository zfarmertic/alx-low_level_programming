#include <stdio.h>

/**
 * main - this print the statement of argument
 * @argc: amount of command line
 * @argv: the number of strings
 * Return: 0 - success.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
