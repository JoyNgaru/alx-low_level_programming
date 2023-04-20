#include "variadic_functions.h"

/**
 * print_strings - fnction to print out strings
 * @separator: A xter to separate strings printed
 * @n: number of  parameters passed
 * @...: unspecified number of numbers to be passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;
	va_list arguments;

	va_start(arguments, n);
	if (separator == NULL)
		separator = "";
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(arguments, int));
		if (separator && count < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(arguments);
}
