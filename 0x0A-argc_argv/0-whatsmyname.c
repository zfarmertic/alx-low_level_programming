#include <stdio.h>

/**
 * main - print the programm  name 
 * @argc: the command count
 * @argv: array strings
 * Return: 0 - success.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
