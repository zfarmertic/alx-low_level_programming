#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - this program prints string followed by a new line
 *
 * @separator: pointer to a constant separator
 * @n: variable
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index;
	char *str;

	/* iterate the argument list from the start */
	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(ap, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && index != n - 1)
			printf("%s", separator);
	}
	/*clean up*/
	va_end(ap);
	printf("\n");
}
