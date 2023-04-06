#include "main.h"

/**
 * a function that prints a string wit a new line
 * @s: string
 * Return: 0 (suces)
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
