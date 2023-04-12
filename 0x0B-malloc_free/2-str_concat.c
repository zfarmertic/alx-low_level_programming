#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int a = 0, b = 0, c = 0, d = 0;

	while (s1 && s1[c])
		c++;
	while (s2 && s2[c])
		c++;

	s3 = malloc(sizeof(char) * (c + d + 1));
	if (s3 == NULL)
		return (NULL);

	a = 0;
	b = 0;

	if (s1)
	{
		while (a < c)
		{
			s3[a] = s1[a];
			a++;
		}
	}

	if (s2)
	{
		while (a < (c + d))
		{
			s3[a] = s2[b];
			a++;
			b++;
		}
	}
	s3[a] = '\0';

	return (s3);
}
