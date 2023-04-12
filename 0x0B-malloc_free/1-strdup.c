#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int p, l;

	p = 0;
	l = 0;

	if (str == NULL)
		return (NULL);

	while (str[l])
		l++;

	dup = malloc(sizeof(char) * (l + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[p] = str[p]) != '\0')
		p++;

	return (dup);
}
