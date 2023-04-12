#include <stdlib.h>
#include "main.h"

/**
 * This program creates an array
 * and initializes it with a specific char
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *r;
	unsigned int a = 0;

	if (size == 0)
		return (NULL);

	r = (char *) malloc(sizeof(char) * size);

	if (r == NULL)
		return (0);

	while (r < size)
	{
		*(r + a) = d;
		a++;
	}

	*(r + a) = '\0';

	return (r);
}
